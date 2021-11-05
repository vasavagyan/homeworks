#include "employee.h"

#include <iostream>

int main(){
	Employee john = {"John", 2000, 200000, "Long Beach"};
	Employee bob = {"Bob", 2005, 150000, "Erevan"};
	Employee frank = {"Frank", 1997, 250000, "Cholbulax"};

	std::cout << "Name   Year of joining        Address" << std::endl;
	john.get();
	bob.get();
	frank.get();

	return 0;
}
