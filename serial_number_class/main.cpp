#include "sernum.h"

#include <iostream>

int main() {

	Sernum obj1;

	std::cout << "obj1 is " << obj1.getNumber() << std::endl;

	if (true) {
		Sernum insideIf1;
		Sernum insideIf2;
		Sernum insideIf3;

		std::cout << "\ninsideIf1 is " << insideIf1.getNumber()
			  << "\ninsideIf2 is " << insideIf2.getNumber()
			  << "\ninsideIf3 is " << insideIf3.getNumber()
			  << std::endl;
	}

	Sernum obj2;
	
	std::cout << "\nobj2 is " << obj2.getNumber() << std::endl;

	return 0;
}
