#include "point.h"

#include <iostream>

int main() {
	Point first;
	Point second(2,3);
	Point third = second;

	std::cout << "first point\n" << first << "second point\n" << second << "third is a copy of second point\n" << third << std::endl;

	third = first + second;
	first = first + 3;
	second = 4 + second;

	std::cout <<"third = first + second\n" << third << "first = first + 3\n" << first << "second = 4 + second\n" << second << std::endl;

	return 0;
}
