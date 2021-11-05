#include "circle.h"

Circle::Circle(double radius){
	m_radius = radius;
}

double Circle::area() const{
	return  PI * m_radius * m_radius;
}

double Circle::circ() const{
	return 2 * PI * m_radius;
}
