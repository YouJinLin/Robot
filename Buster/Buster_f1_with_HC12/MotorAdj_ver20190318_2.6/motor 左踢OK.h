/*motor.h by MotorAdjust.jar 
Gatsby Jan
gatsby.jan@ppt.com.tw

Copyright (c) 2018 - 2019 Phoenix Pioneer technology
*/
#ifndef __MOTOR_H__
#define __MOTOR_H__

#define MOTOR_FRAME_MAX 60
#define MOTOR_MOTOR_MAX 26

enum{
	MOTOR_EN  = 0,
	MOTOR_POS,
	MOTOR_SPEED,
	MOTOR_PARA_MAX
};


const PROGMEM uint16_t motor_para[MOTOR_FRAME_MAX][MOTOR_MOTOR_MAX][MOTOR_PARA_MAX]={
	{ // frame 0	
		{1, 1530, 100}, {1, 1530, 100}, {1, 1530, 100}, {1, 1542, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1526, 100}, {1, 1546, 100}, {1, 1536, 100}, 
		{1, 1524, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1520, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1528, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 1	
		{1, 1730, 150}, {1, 1980, 150}, {1, 1180, 150}, {1, 1522, 150}, {1, 1810, 150}, 
		{1, 1450, 150}, {1, 1760, 150}, {1, 1326, 150}, {1, 1096, 150}, {1, 1886, 150}, 
		{1, 1544, 150}, {1, 1248, 150}, {1, 1616, 150}, {1, 1278, 150}, {1, 1532, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1500, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1548, 150}, {0, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 2	
		{1, 1630, 80}, {1, 2030, 80}, {1, 1530, 80}, {1, 1542, 80}, {1, 1790, 80}, 
		{1, 1430, 80}, {1, 1750, 80}, {1, 1426, 80}, {1, 1046, 80}, {1, 1536, 80}, 
		{1, 1524, 80}, {1, 1268, 80}, {1, 1636, 80}, {1, 1288, 80}, {1, 1532, 80}, 
		{0, 1500, 80}, {0, 1500, 80}, {0, 1500, 80}, {0, 1500, 80}, {1, 1520, 80}, 
		{0, 1500, 80}, {0, 1500, 80}, {0, 1500, 80}, {1, 1528, 80}, {0, 1500, 80}, 
		{0, 1500, 80}, 
	},
	{ // frame 3	
		{1, 1630, 100}, {1, 2030, 100}, {1, 1530, 100}, {1, 1542, 100}, {1, 1800, 100}, 
		{1, 1430, 100}, {1, 1750, 100}, {1, 1426, 100}, {1, 1046, 100}, {1, 1536, 100}, 
		{1, 1544, 100}, {1, 1238, 100}, {1, 1596, 100}, {1, 1268, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1540, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1588, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 4	
		{1, 1630, 70}, {1, 2010, 70}, {1, 1530, 70}, {1, 1522, 70}, {1, 1780, 70}, 
		{1, 1430, 70}, {1, 1750, 70}, {1, 1426, 70}, {1, 1066, 70}, {1, 1536, 70}, 
		{1, 1544, 70}, {1, 1168, 70}, {1, 1426, 70}, {1, 1238, 70}, {1, 1532, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1540, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1528, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 5	
		{1, 1630, 120}, {1, 2010, 120}, {1, 1530, 120}, {1, 1522, 120}, {1, 1740, 120}, 
		{1, 1410, 120}, {1, 1780, 120}, {1, 1426, 120}, {1, 1066, 120}, {1, 1536, 120}, 
		{1, 1544, 120}, {1, 1268, 120}, {1, 1646, 120}, {1, 1298, 120}, {1, 1532, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1500, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1528, 120}, {0, 1500, 120}, 
		{0, 1500, 120}, 
	},
	{ // frame 6	
		{1, 1630, 70}, {1, 2010, 70}, {1, 1530, 70}, {1, 1522, 70}, {1, 1890, 70}, 
		{1, 1640, 70}, {1, 1800, 70}, {1, 1426, 70}, {1, 1066, 70}, {1, 1536, 70}, 
		{1, 1544, 70}, {1, 1278, 70}, {1, 1636, 70}, {1, 1288, 70}, {1, 1532, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1520, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1508, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 7	
		{1, 1630, 120}, {1, 2010, 120}, {1, 1530, 120}, {1, 1522, 120}, {1, 1790, 120}, 
		{1, 1420, 120}, {1, 1740, 120}, {1, 1426, 120}, {1, 1066, 120}, {1, 1536, 120}, 
		{1, 1544, 120}, {1, 1318, 120}, {1, 1656, 120}, {1, 1258, 120}, {1, 1532, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1520, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1548, 120}, {0, 1500, 120}, 
		{0, 1500, 120}, 
	},
	{ // frame 8	
		{1, 1630, 70}, {1, 2010, 70}, {1, 1530, 70}, {1, 1522, 70}, {1, 1780, 70}, 
		{1, 1430, 70}, {1, 1760, 70}, {1, 1426, 70}, {1, 1066, 70}, {1, 1536, 70}, 
		{1, 1544, 70}, {1, 1218, 70}, {1, 1426, 70}, {1, 1138, 70}, {1, 1532, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1540, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1528, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 9	
		{1, 1630, 120}, {1, 2010, 120}, {1, 1530, 120}, {1, 1522, 120}, {1, 1810, 120}, 
		{1, 1450, 120}, {1, 1740, 120}, {1, 1426, 120}, {1, 1066, 120}, {1, 1536, 120}, 
		{1, 1544, 120}, {1, 1328, 120}, {1, 1626, 120}, {1, 1218, 120}, {1, 1532, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1500, 120}, 
		{0, 1500, 120}, {0, 1500, 120}, {0, 1500, 120}, {1, 1528, 120}, {0, 1500, 120}, 
		{0, 1500, 120}, 
	},
	{ // frame 10	
		{1, 1630, 70}, {1, 2010, 70}, {1, 1530, 70}, {1, 1522, 70}, {1, 1840, 70}, 
		{1, 1640, 70}, {1, 1900, 70}, {1, 1426, 70}, {1, 1066, 70}, {1, 1536, 70}, 
		{1, 1544, 70}, {1, 1278, 70}, {1, 1636, 70}, {1, 1278, 70}, {1, 1532, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1520, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1508, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 11	
		{1, 1630, 150}, {1, 2010, 150}, {1, 1530, 150}, {1, 1522, 150}, {1, 1730, 150}, 
		{1, 1440, 150}, {1, 1820, 150}, {1, 1426, 150}, {1, 1066, 150}, {1, 1536, 150}, 
		{1, 1544, 150}, {1, 1248, 150}, {1, 1616, 150}, {1, 1298, 150}, {1, 1532, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1520, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1548, 150}, {0, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 12	
		{1, 1730, 20}, {1, 1980, 20}, {1, 1230, 20}, {1, 1542, 20}, {1, 1790, 20}, 
		{1, 1440, 20}, {1, 1760, 20}, {1, 1326, 20}, {1, 1096, 20}, {1, 1836, 20}, 
		{1, 1524, 20}, {1, 1268, 20}, {1, 1626, 20}, {1, 1278, 20}, {1, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 13	
		{1, 1630, 130}, {1, 1980, 130}, {1, 1230, 130}, {1, 1542, 130}, {1, 1760, 130}, 
		{1, 1390, 130}, {1, 1740, 130}, {1, 1226, 130}, {1, 1096, 130}, {1, 1836, 130}, 
		{1, 1524, 130}, {1, 1298, 130}, {1, 1676, 130}, {1, 1298, 130}, {1, 1482, 130}, 
		{0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {1, 1320, 130}, 
		{0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {1, 1728, 130}, {0, 1500, 130}, 
		{0, 1500, 130}, 
	},
	{ // frame 14	
		{1, 1830, 130}, {1, 1980, 130}, {1, 1230, 130}, {1, 1542, 130}, {1, 1760, 130}, 
		{1, 1390, 130}, {1, 1740, 130}, {1, 1426, 130}, {1, 1096, 130}, {1, 1836, 130}, 
		{1, 1524, 130}, {1, 1298, 130}, {1, 1676, 130}, {1, 1298, 130}, {1, 1582, 130}, 
		{0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {1, 1320, 130}, 
		{0, 1500, 130}, {0, 1500, 130}, {0, 1500, 130}, {1, 1728, 130}, {0, 1500, 130}, 
		{0, 1500, 130}, 
	},
	{ // frame 15	
		{1, 1530, 300}, {1, 1830, 300}, {1, 1030, 300}, {1, 1442, 300}, {1, 1900, 300}, 
		{1, 1350, 300}, {1, 2030, 300}, {1, 1526, 300}, {1, 1246, 300}, {1, 2036, 300}, 
		{1, 1624, 300}, {1, 1158, 300}, {1, 1716, 300}, {1, 1008, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1520, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1528, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 16	
		{1, 1030, 350}, {1, 2080, 350}, {1, 1530, 350}, {1, 1442, 350}, {1, 2100, 350}, 
		{1, 1350, 350}, {1, 1960, 350}, {1, 1926, 350}, {1, 896, 350}, {1, 1836, 350}, 
		{1, 1624, 350}, {1, 958, 350}, {1, 1716, 350}, {1, 1078, 350}, {1, 1632, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1520, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1528, 350}, {0, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 17	
		{1, 1580, 300}, {1, 1880, 300}, {1, 1280, 300}, {1, 1342, 300}, {1, 2100, 300}, 
		{1, 1950, 300}, {1, 2030, 300}, {1, 1776, 300}, {1, 1196, 300}, {1, 1286, 300}, 
		{1, 1724, 300}, {1, 958, 300}, {1, 1116, 300}, {1, 1008, 300}, {1, 1832, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1320, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1728, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 18	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 19	
		{1, 1530, 350}, {1, 1530, 350}, {1, 1580, 350}, {1, 1442, 350}, {1, 1800, 350}, 
		{1, 1450, 350}, {1, 1760, 350}, {1, 1526, 350}, {1, 1546, 350}, {1, 1486, 350}, 
		{1, 1624, 350}, {1, 1258, 350}, {1, 1616, 350}, {1, 1278, 350}, {1, 1532, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1420, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1628, 350}, {0, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 20	
		{1, 2130, 300}, {1, 1430, 300}, {1, 1130, 300}, {1, 1442, 300}, {1, 1800, 300}, 
		{1, 1450, 300}, {1, 1760, 300}, {1, 926, 300}, {1, 1646, 300}, {1, 1936, 300}, 
		{1, 1624, 300}, {1, 1258, 300}, {1, 1616, 300}, {1, 1278, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1420, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1628, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 21	
		{1, 2030, 300}, {1, 2030, 300}, {1, 1130, 300}, {1, 1442, 300}, {1, 2000, 300}, 
		{1, 1550, 300}, {1, 1260, 300}, {1, 1026, 300}, {1, 1046, 300}, {1, 1936, 300}, 
		{1, 1624, 300}, {1, 1058, 300}, {1, 1516, 300}, {1, 1778, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1520, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1528, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 22	
		{1, 2230, 350}, {1, 2030, 350}, {1, 1180, 350}, {1, 1342, 350}, {1, 2100, 350}, 
		{1, 1850, 350}, {1, 1460, 350}, {1, 826, 350}, {1, 1046, 350}, {1, 1886, 350}, 
		{1, 1724, 350}, {1, 958, 350}, {1, 1216, 350}, {1, 1578, 350}, {1, 1532, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1420, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1628, 350}, {0, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 23	
		{1, 1880, 300}, {1, 2030, 300}, {1, 1630, 300}, {1, 1242, 300}, {1, 2100, 300}, 
		{1, 1920, 300}, {1, 1850, 300}, {1, 1176, 300}, {1, 1046, 300}, {1, 1436, 300}, 
		{1, 1824, 300}, {1, 958, 300}, {1, 1146, 300}, {1, 1188, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1220, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1828, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 24	
		{1, 1630, 300}, {1, 1980, 300}, {1, 1830, 300}, {1, 1442, 300}, {1, 2100, 300}, 
		{1, 1920, 300}, {1, 1950, 300}, {1, 1426, 300}, {1, 1096, 300}, {1, 1236, 300}, 
		{1, 1624, 300}, {1, 958, 300}, {1, 1146, 300}, {1, 1088, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1420, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1628, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 25	
		{1, 1730, 350}, {1, 1980, 350}, {1, 1180, 350}, {1, 1522, 350}, {1, 1810, 350}, 
		{1, 1450, 350}, {1, 1760, 350}, {1, 1326, 350}, {1, 1096, 350}, {1, 1886, 350}, 
		{1, 1544, 350}, {1, 1248, 350}, {1, 1616, 350}, {1, 1278, 350}, {1, 1532, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1500, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1548, 350}, {0, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 26	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1532, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1534, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1510, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1538, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 27	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1542, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1544, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1540, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1548, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 28	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1522, 100}, {1, 1860, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1584, 100}, {1, 1118, 100}, {1, 1326, 100}, {1, 1138, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1550, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1588, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 29	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1542, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1564, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1550, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1568, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 30	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1502, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1524, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1480, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1498, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 31	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1522, 100}, {1, 1940, 100}, 
		{1, 1740, 100}, {1, 1900, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1544, 100}, {1, 1198, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1500, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1498, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 32	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1522, 100}, {1, 1840, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1524, 100}, {1, 1218, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1500, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1508, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 33	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1482, 100}, {1, 1940, 100}, 
		{1, 1740, 100}, {1, 1900, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1544, 100}, {1, 1198, 100}, {1, 1526, 100}, {1, 1238, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1460, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1498, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 34	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1230, 100}, {1, 1522, 100}, {1, 1860, 100}, 
		{1, 1540, 100}, {1, 1800, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1836, 100}, 
		{1, 1544, 100}, {1, 1118, 100}, {1, 1326, 100}, {1, 1138, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1550, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1548, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 35	
		{1, 1730, 20}, {1, 1980, 20}, {1, 1180, 20}, {1, 1542, 20}, {1, 1810, 20}, 
		{1, 1450, 20}, {1, 1760, 20}, {1, 1326, 20}, {1, 1096, 20}, {1, 1886, 20}, 
		{1, 1524, 20}, {1, 1248, 20}, {1, 1616, 20}, {1, 1278, 20}, {1, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 36	
		{1, 1730, 200}, {1, 1980, 200}, {1, 1180, 200}, {1, 1572, 200}, {1, 1810, 200}, 
		{1, 1450, 200}, {1, 1760, 200}, {1, 1326, 200}, {1, 1096, 200}, {1, 1886, 200}, 
		{1, 1554, 200}, {1, 1248, 200}, {1, 1616, 200}, {1, 1278, 200}, {1, 1532, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1580, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1578, 200}, {0, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 37	
		{1, 1730, 100}, {1, 1980, 100}, {1, 1180, 100}, {1, 1542, 100}, {1, 1810, 100}, 
		{1, 1450, 100}, {1, 1760, 100}, {1, 1326, 100}, {1, 1096, 100}, {1, 1886, 100}, 
		{1, 1554, 100}, {1, 1148, 100}, {1, 1216, 100}, {1, 1078, 100}, {1, 1532, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1580, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1558, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 38	
		{1, 1730, 150}, {1, 1980, 150}, {1, 1180, 150}, {1, 1502, 150}, {1, 1810, 150}, 
		{1, 1450, 150}, {1, 1770, 150}, {1, 1326, 150}, {1, 1096, 150}, {1, 1886, 150}, 
		{1, 1554, 150}, {1, 1348, 150}, {1, 1316, 150}, {1, 1678, 150}, {1, 1532, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1580, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1558, 150}, {0, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 39	
		{1, 1730, 10}, {1, 1980, 10}, {1, 1180, 10}, {1, 1502, 10}, {1, 1810, 10}, 
		{1, 1450, 10}, {1, 1740, 10}, {1, 1326, 10}, {1, 1096, 10}, {1, 1886, 10}, 
		{1, 1554, 10}, {1, 1118, 10}, {1, 1576, 10}, {1, 1488, 10}, {1, 1532, 10}, 
		{0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {1, 1580, 10}, 
		{0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {1, 1628, 10}, {0, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 40	
		{1, 1730, 10}, {1, 1980, 10}, {1, 1180, 10}, {1, 1502, 10}, {1, 1790, 10}, 
		{1, 1450, 10}, {1, 1730, 10}, {1, 1326, 10}, {1, 1096, 10}, {1, 1886, 10}, 
		{1, 1554, 10}, {1, 948, 10}, {1, 2116, 10}, {1, 1178, 10}, {1, 1532, 10}, 
		{0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {1, 1580, 10}, 
		{0, 1500, 10}, {0, 1500, 10}, {0, 1500, 10}, {1, 1528, 10}, {0, 1500, 10}, 
		{0, 1500, 10}, 
	},
	{ // frame 41	
		{1, 1730, 300}, {1, 1980, 300}, {1, 1180, 300}, {1, 1502, 300}, {1, 1790, 300}, 
		{1, 1450, 300}, {1, 1750, 300}, {1, 1326, 300}, {1, 1096, 300}, {1, 1886, 300}, 
		{1, 1554, 300}, {1, 1048, 300}, {1, 1216, 300}, {1, 1078, 300}, {1, 1532, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1576, 300}, 
		{0, 1500, 300}, {0, 1500, 300}, {0, 1500, 300}, {1, 1558, 300}, {0, 1500, 300}, 
		{0, 1500, 300}, 
	},
	{ // frame 42	
		{1, 930, 200}, {1, 2180, 200}, {1, 1780, 200}, {1, 1142, 200}, {1, 1990, 200}, 
		{1, 990, 200}, {1, 1550, 200}, {1, 2126, 200}, {1, 896, 200}, {1, 1286, 200}, 
		{1, 1924, 200}, {1, 1068, 200}, {1, 2076, 200}, {1, 1488, 200}, {1, 1532, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1420, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1628, 200}, {0, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 43	
		{1, 830, 200}, {1, 2180, 200}, {1, 1780, 200}, {1, 1342, 200}, {1, 1390, 200}, 
		{1, 1590, 200}, {1, 1550, 200}, {1, 2226, 200}, {1, 896, 200}, {1, 1286, 200}, 
		{1, 1724, 200}, {1, 1668, 200}, {1, 1476, 200}, {1, 1488, 200}, {1, 1532, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1570, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1478, 200}, {0, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 44	
		{1, 830, 200}, {0, 2180, 200}, {1, 1780, 200}, {1, 1342, 200}, {1, 1390, 200}, 
		{1, 1590, 200}, {1, 1550, 200}, {1, 2226, 200}, {0, 896, 200}, {1, 1286, 200}, 
		{1, 1724, 200}, {1, 1668, 200}, {1, 1476, 200}, {1, 1488, 200}, {1, 1532, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1570, 200}, 
		{0, 1500, 200}, {0, 1500, 200}, {0, 1500, 200}, {1, 1478, 200}, {0, 1500, 200}, 
		{0, 1500, 200}, 
	},
	{ // frame 45	
		{0, 1630, 350}, {1, 1580, 350}, {0, 1380, 350}, {0, 1442, 350}, {1, 1800, 350}, 
		{1, 1450, 350}, {0, 1760, 350}, {0, 1426, 350}, {1, 1496, 350}, {0, 1686, 350}, 
		{0, 1624, 350}, {1, 1258, 350}, {1, 1616, 350}, {0, 1278, 350}, {1, 1532, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1420, 350}, 
		{0, 1500, 350}, {0, 1500, 350}, {0, 1500, 350}, {1, 1628, 350}, {0, 1500, 350}, 
		{0, 1500, 350}, 
	},
	{ // frame 46	
		{1, 1330, 150}, {1, 1980, 150}, {1, 1180, 150}, {1, 1542, 150}, {1, 1800, 150}, 
		{1, 1540, 150}, {1, 1870, 150}, {1, 1826, 150}, {1, 1196, 150}, {1, 1236, 150}, 
		{1, 1754, 150}, {1, 1058, 150}, {1, 1316, 150}, {1, 1168, 150}, {1, 1232, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1360, 150}, 
		{0, 1500, 150}, {0, 1500, 150}, {0, 1500, 150}, {1, 1578, 150}, {0, 1500, 150}, 
		{0, 1500, 150}, 
	},
	{ // frame 47	
		{1, 1630, 70}, {1, 1980, 70}, {1, 1480, 70}, {1, 1542, 70}, {1, 1740, 70}, 
		{1, 1410, 70}, {1, 1830, 70}, {1, 1626, 70}, {1, 1146, 70}, {1, 1336, 70}, 
		{1, 1724, 70}, {1, 1018, 70}, {1, 1456, 20}, {1, 1318, 70}, {1, 1632, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1380, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1578, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 48	
		{1, 1530, 70}, {1, 1980, 70}, {1, 1480, 70}, {1, 1442, 70}, {1, 1620, 70}, 
		{1, 1540, 70}, {1, 2010, 70}, {1, 2026, 70}, {1, 1246, 70}, {1, 1736, 70}, 
		{1, 1544, 70}, {1, 1018, 70}, {1, 1526, 70}, {1, 1448, 70}, {1, 1882, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1420, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1548, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 49	
		{1, 1530, 70}, {0, 1980, 70}, {0, 1480, 70}, {1, 1442, 70}, {1, 1620, 70}, 
		{1, 1540, 70}, {1, 2010, 70}, {1, 2026, 70}, {1, 1246, 70}, {0, 1736, 70}, 
		{1, 1544, 70}, {1, 1018, 70}, {1, 1526, 70}, {1, 1448, 70}, {1, 1882, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1420, 70}, 
		{0, 1500, 70}, {0, 1500, 70}, {0, 1500, 70}, {1, 1548, 70}, {0, 1500, 70}, 
		{0, 1500, 70}, 
	},
	{ // frame 50	
		{1, 1130, 20}, {1, 1880, 20}, {1, 1680, 20}, {1, 1342, 20}, {1, 1540, 20}, 
		{1, 1230, 20}, {1, 1770, 20}, {1, 1926, 20}, {1, 1196, 20}, {1, 1386, 20}, 
		{1, 1724, 20}, {1, 1148, 20}, {1, 1516, 20}, {1, 1318, 20}, {1, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1300, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1628, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 51	
		{1, 1130, 20}, {1, 1880, 20}, {1, 1680, 20}, {1, 1342, 20}, {1, 1910, 20}, 
		{1, 1550, 20}, {1, 1720, 20}, {1, 1926, 20}, {1, 1196, 20}, {1, 1386, 20}, 
		{1, 1724, 20}, {1, 1518, 20}, {1, 1836, 20}, {1, 1268, 20}, {1, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1420, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1748, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 52	
		{1, 1130, 100}, {1, 1880, 100}, {1, 1680, 100}, {1, 1342, 100}, {1, 1790, 100}, 
		{1, 1550, 100}, {1, 1784, 100}, {1, 1926, 100}, {1, 1196, 100}, {1, 1386, 100}, 
		{1, 1724, 100}, {1, 1268, 100}, {1, 1516, 100}, {1, 1248, 100}, {1, 1732, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1120, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1928, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 53	
		{1, 1130, 100}, {1, 1880, 100}, {1, 1680, 100}, {1, 1342, 100}, {1, 1790, 100}, 
		{1, 1550, 100}, {1, 1784, 100}, {1, 1926, 100}, {1, 1196, 100}, {1, 1386, 100}, 
		{1, 1724, 100}, {1, 1268, 100}, {1, 1516, 100}, {1, 1248, 100}, {1, 1332, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1120, 100}, 
		{0, 1500, 100}, {0, 1500, 100}, {0, 1500, 100}, {1, 1928, 100}, {0, 1500, 100}, 
		{0, 1500, 100}, 
	},
	{ // frame 54	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 55	
		{1, 1130, 20}, {1, 1880, 20}, {1, 1680, 20}, {1, 1342, 20}, {1, 1830, 20}, 
		{1, 1550, 20}, {1, 1790, 20}, {1, 1926, 20}, {1, 1196, 20}, {1, 1386, 20}, 
		{1, 1724, 20}, {1, 1228, 20}, {1, 1516, 20}, {1, 1248, 20}, {1, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1320, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {1, 1728, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 56	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 57	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 58	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
	{ // frame 59	
		{0, 1530, 20}, {0, 1530, 20}, {0, 1530, 20}, {0, 1542, 20}, {0, 1590, 20}, 
		{0, 1540, 20}, {0, 1550, 20}, {0, 1526, 20}, {0, 1546, 20}, {0, 1536, 20}, 
		{0, 1524, 20}, {0, 1468, 20}, {0, 1526, 20}, {0, 1488, 20}, {0, 1532, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1520, 20}, 
		{0, 1500, 20}, {0, 1500, 20}, {0, 1500, 20}, {0, 1528, 20}, {0, 1500, 20}, 
		{0, 1500, 20}, 
	},
};

#endif