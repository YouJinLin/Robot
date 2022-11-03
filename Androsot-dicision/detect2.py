from re import I
from turtle import position
import cv2
import numpy as np
import math
from enum import Enum

from sympy import re

# https://zh.wikipedia.org/wiki/%E8%89%B2%E7%9B%B8
#1/20 get_color_position 新增測試
#1/21 在_get_frame_position新增return coordinate & coordinate=arr
#1/21 在get_frame_position中 arr增加=None
#1/21 get_init_position 第3,4行新增coordinate
#1/21 在__init__第3行新增coordinate
#1/22 在get_color_position 倒數兩行新增circle
#1/22 將init_set_frame中waitKey 更改為3

TEAM_COLOR = [
    np.array([120-20, 255//3, 255//3]), # Lower
    np.array([110+10, 255//3, 255//3]) # Upper
]

A_COLOR = [
    np.array([140,255//3,255//3]), # Lower
    np.array([200, 255//3, 255//3]) # Upper
]
B_COLOR = [
    np.array([200, 255//3, 255//3]), # Lower
    np.array([340, 255//3, 255//3]) # Upper
]
C_COLOR = [
    np.array([40, 255//3, 255//3]), # Lower
    np.array([80, 255//3, 255//3]) # Upper
]

class detect(object):
    def __init__(self) -> None:
        super().__init__()
        self.cap = cv2.VideoCapture(0, cv2.CAP_DSHOW)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)
        print("BRIGHTNESS = ", self.cap.get(cv2.CAP_PROP_BRIGHTNESS)) 
        self.cap.set(cv2.CAP_PROP_CONTRAST, 1000)
        init_location , x_l, x_r, y_t, y_b,coordinate = self.get_init_position()
        self.init_location = init_location
        self.x_l = x_l
        self.x_r = x_r
        self.y_t = y_t
        self.y_b = y_b
        self.coordinate=coordinate

        self.a_center = 0,0
        self.b_center = 0,0
        self.c_center = 0,0
        self.a_rot = 0
        self.b_rot = 0
        self.c_rot = 0


    def init_set_frame(self,img):
        position = list()
        def on_EVENT_LBUTTONDOWN(event, x, y, flags, param):
            if event == cv2.EVENT_LBUTTONDOWN:
                xy = "%d,%d" % (x, y)
                position.append([x, y])
                cv2.circle(img, (x, y), 1, (255, 0, 0), thickness = -1)
                cv2.putText(img, xy, (x, y), cv2.FONT_HERSHEY_PLAIN,
                            1.0, (255,255,255), thickness = 1)
                cv2.imshow("image", img)
            
        cv2.namedWindow("image")
        cv2.setMouseCallback("image", on_EVENT_LBUTTONDOWN)
        cv2.imshow("image", img)

        while(True):
            try:
                key = cv2.waitKey(1) & 0xFF
                if key == ord("q"):
                    break
            except Exception:
                cv2.destroyWindow("image")
                break
                
        cv2.waitKey(3)
        return position

    def get_robot_rotation(self, pos1, pos2):
        # both found
        dy = abs(pos1[1] - pos2[1])
        dx = abs(pos1[0] - pos2[0])
        deg = math.degrees(math.atan2(dy, dx))
        if dy > dx:
            if pos2[1] > pos1[1]:
                deg = 180+deg  
            else:
                deg = 180-deg
        else:
            if pos2[0] > pos1[0]:
                deg = 180+deg
            else:
                deg = 180-deg  

        return 180-deg if pos1[1] < pos2[1] or pos1[0] > pos2[0] else deg

    def get_robot_position(self):
        success, img = self.cap.read()
        while not success:
            success, img = self.cap.read()
        img = cv2.resize(img, (1080, 720))
        img = img[self.y_b:self.y_t,self.x_r:self.x_l]
        k = np.ones((3,3))
        img = cv2.erode(img, k, 2)
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

        team_mask = cv2.inRange(hsv, TEAM_COLOR[0], TEAM_COLOR[1])

        a_mask = cv2.inRange(hsv, A_COLOR[0], A_COLOR[1])
        b_mask = cv2.inRange(hsv, B_COLOR[0], B_COLOR[1])
        c_mask = cv2.inRange(hsv, C_COLOR[0], C_COLOR[1])

        def get_pos(mask, threshold=90):
            cts, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            for ct in cts:
                if cv2.contourArea(ct) > threshold:
                    cv2.drawContours(img, [ct], 0, (0, 255, 0), 2)
                    mnt = cv2.moments(ct)
                    return int(mnt['m10']/mnt['m00']), int(mnt['m01']/mnt['m00'])
        
        a_center = get_pos(a_mask)
        b_center = get_pos(b_mask)
        c_center = get_pos(c_mask)

        def cal_distance(pos1, pos2):
            return abs(math.sqrt((pos1[0]-pos2[0])**2 + (pos1[1]-pos2[1])**2))

        # pair team tag with id tag
        a_candidates = []
        b_candidates = []
        c_candidates = []
        cts, _ = cv2.findContours(team_mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        for ct in cts:
            if cv2.contourArea(ct) > 90:
                cv2.drawContours(img, [ct], 0, (255, 255, 0), 2)
                mnt = cv2.moments(ct)
                team_pos = int(mnt['m10']/mnt['m00']), int(mnt['m01']/mnt['m00'])
                a_dist = 99999
                b_dist = 99999
                c_dist = 99999
                if a_center:
                    a_dist = cal_distance(a_center, team_pos)

                if b_center:
                    b_dist = cal_distance(b_center, team_pos)

                if c_center:
                    c_dist = cal_distance(c_center, team_pos)

                closest = [a_dist, b_dist, c_dist].index(min(a_dist, b_dist, c_dist))
                if closest == 0:
                    a_candidates.append(team_pos)
                elif closest == 1:
                    b_candidates.append(team_pos)
                else:
                    c_candidates.append(team_pos)
        if a_center:
            self.a_center = a_center
            self.a_rot = self.get_robot_rotation(a_center, min(a_candidates, key=lambda x: cal_distance(x, a_center)))
        if b_center:
            self.b_center = b_center
            self.b_rot = self.get_robot_rotation(b_center, min(b_candidates, key=lambda x: cal_distance(x, b_center)))
        if c_center:
            self.c_center = c_center
            self.c_rot = self.get_robot_rotation(c_center, min(c_candidates, key=lambda x: cal_distance(x, c_center)))

        return (a_center, self.a_rot), (b_center, self.b_rot), (c_center, self.c_rot)

    def get_color_position(self):
        while True:
            success, img = self.cap.read()
            if not success:
                continue
            img = cv2.resize(img, (1080, 720))
            img = img[self.y_b:self.y_t,self.x_r:self.x_l]
            k = np.ones((3,3))
            img = cv2.erode(img, k, 2)
            hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

            ##測試
            deep_blue_lower = np.array([120-20, 255//3, 255//3])
            deep_blue_upper = np.array([110+10, 255, 255])
            g_lower = np.array([45-40, 255//3, 255//3])
            g_upper = np.array([40+35, 255, 255])
            ##

            yellow_mask = cv2.inRange(hsv, g_lower, g_upper)
            deep_blue_mask = cv2.inRange(hsv, deep_blue_lower, deep_blue_upper)
            # mask = cv2.bitwise_or(yellow_mask, deep_blue_mask)
            # y_img = cv2.bitwise_and(img, img, mask=yellow_mask)
            # b_img = cv2.bitwise_and(img, img, mask=deep_blue_mask)
            y_center = None
            b_center = None
            deg = 0
            cts, _ = cv2.findContours(yellow_mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            for ct in cts:
                if cv2.contourArea(ct) > 90:
                    cv2.drawContours(img, [ct], 0, (0, 255, 0), 2)
                    mnt = cv2.moments(ct)
                    y_center = int(mnt['m10']/mnt['m00']), int(mnt['m01']/mnt['m00'])
            cts, _ = cv2.findContours(deep_blue_mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            for ct in cts:
                if cv2.contourArea(ct) > 100:
                    cv2.drawContours(img, [ct], 0, (0, 0, 255), 2)
                    mnt = cv2.moments(ct)
                    b_center = int(mnt['m10']/mnt['m00']), int(mnt['m01']/mnt['m00'])
            print("y,b center = ", y_center, b_center)

            # make sure those tags are stick together
            if y_center and b_center:
                # both found
                distance = math.sqrt(
                    (max(y_center)-min(y_center))**2
                    + (max(b_center)-min(b_center))**2
                    )
                print("distance = ", distance)
                if distance < 600:
                    dy = abs(y_center[1] - b_center[1])
                    dx = abs(y_center[0] - b_center[0])
                    deg = math.degrees(math.atan2(dy, dx))
                    if dy > dx:
                        if b_center[1] > y_center[1]:
                            deg = 180+deg  
                        else:
                            deg = 180-deg
                    else:
                        if b_center[0] > y_center[0]:
                            deg = 180+deg
                        else:
                            deg = 180-deg  

                    deg = 180-deg if y_center[1] < b_center[1] or y_center[0] > b_center[0] else deg
                    print(f'deg: {deg}')
            #img = cv2.resize(img, (1080//2, 720//2))
            return(y_center, b_center, deg , img)

    def take_picture(self):
        while True:
            success, img = self.cap.read()
            if not success:
                continue
            img = cv2.resize(img, (1080, 720))
            return img

    def get_frame_position(self,arr):
        x_l = 200
        x_r = 200
        y_t = 200
        y_b = 200
        coordinate=[]
        for i in arr:
            if(x_l < i[0]):
                x_l = i[0]
            if(x_r > i[0]):
                x_r = i[0]
            if(y_t < i[1]):
                y_t = i[1]
            if(y_b > i[1]):
                y_b = i[1]
            coordinate=i
        return x_l, x_r, y_t, y_b, coordinate

    def get_init_position(self):
        img = self.take_picture()
        arr = self.init_set_frame(img)
        x_l, x_r, y_t, y_b, coordinate = self.get_frame_position(arr)
        return arr[2] , x_l, x_r, y_t, y_b, coordinate

