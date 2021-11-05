#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle(double radius);
	double area() const;
	double circ() const;

private:
	const double PI = 3.14;
	double m_radius = 0;
};

#endif
