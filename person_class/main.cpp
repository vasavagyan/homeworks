#include "person.h"

#include <iostream>
#include <string>

int main() {
	Person first;
	Person second(23);
	Person third("Jack");
	Person fourth("Hke", 20);

	std::cout << "here are these 4 persons (printing with overloaded << operator:" << std::endl
		  << "first:\n" << first << "second:\n" << second << "third:\n" << third << "fourth:\n" << fourth << std::endl;

	first.set_name("Arpine");
	first.set_age(30);
	second.set_name("Hrach");
	third.set_age(26);

	std::cout << "after using setters" << std::endl
		  << "first:\n" << first << "second:\n" << second << "third:\n" << third << "fourth:\n" << fourth << std::endl;
	
	
	
	return 0;
}
