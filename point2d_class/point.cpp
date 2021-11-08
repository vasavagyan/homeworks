#include "point.h"

#include <iostream>

Point::Point() : m_x{0}, m_y{0}
{
}

Point::Point(int x, int y) : m_x{x}, m_y{y}
{
}

Point::Point(const Point& po)
{
	m_x = po.m_x;
	m_y = po.m_y;
}

Point& Point::operator=(const Point& po)
{
	if (this == &po) {
		return *this;
	}
	m_x = po.m_x;
	m_y = po.m_y;

	return *this;
}

Point Point::operator+(const Point& po)
{
	return Point(m_x + po.m_x, m_y + po.m_y);
}

Point Point::operator+(int val)
{
	return Point(m_x + val, m_y + val);
}

Point Point::operator-(const Point& po)
{
	return Point(m_x - po.m_x, m_y - po.m_y);
}

Point Point::operator-(int val)
{
	return Point(m_x - val, m_y - val);
}

Point Point::operator/(const Point& po)
{
	if (po.m_x == 0 || po.m_y == 0) {
		std::cout << "the divider can't be 0" << std::endl;
		std::exit(-1);
	}

	return Point(m_x / po.m_x, m_y / po.m_y);
}

Point Point::operator/(int val)
{
	if (val == 0) {
		std::cout << "divider can't be 0" << std::endl;
		std::exit(-1);
	}

	return Point(m_x / val, m_y / val);
}

Point Point::operator*(const Point& po)
{
	return Point(m_x * po.m_x, m_y * po.m_y);
}

Point Point::operator*(int val)
{
	return Point(m_x * val, m_y * val);
}

//friend operator overloading

Point operator+(int val, const Point& po)
{
	return Point(val + po.m_x, val + po.m_y);
}

Point operator-(int val, const Point& po)
{
	return Point(val - po.m_x, val - po.m_y);
}

Point operator/(int val, const Point& po)
{
	return Point(val / po.m_x, val / po.m_y);
}

Point operator*(int val, const Point& po)
{
	return Point(val * po.m_x, val * po.m_y);
}

std::ostream& operator<<(std::ostream& os, const Point& po)
{
	os << "x value: " << po.m_x << std::endl
	   << "y value: " << po.m_y << std::endl;

	return os;
}
