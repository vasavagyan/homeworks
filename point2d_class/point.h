#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
public:
	Point();
	Point(int x, int y);
	Point(const Point& po);

	Point& operator=(const Point& po);
	Point operator+(const Point& po);
	Point operator+(int val);
	Point operator-(const Point& po);
	Point operator-(int val);
	Point operator/(const Point& po);
	Point operator/(int val);
	Point operator*(const Point& po);
	Point operator*(int val);

	friend Point operator+(int val, const Point& po);
	friend Point operator-(int val, const Point& po);
	friend Point operator/(int val, const Point& po);
	friend Point operator*(int val, const Point& po);
	friend std::ostream& operator<<(std::ostream& os, const Point& po);

private:
	int m_x = 0;
	int m_y = 0;
};

#endif
