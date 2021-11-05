#include "circle.h"

#include <iostream>

int main(){
	std::cout << "enter radius: ";
	double r;
	std::cin >> r;

	Circle tuft(r);
	std::cout << "the area of the circle is:  " << tuft.area() << std::endl
		  << "the circumference is:  " << tuft.circ() << std::endl;

	return 0;
}
