#include "student.h"

#include <iostream>

int main(){

	Student arr[3];

	for (int i = 0; i < 3; ++i) {
		char name[20];
		char surname[40];
		
		std::cout << "enter student's name (press ! after input): " << std::endl;
		std::cin >> name;

		std::cout << "enter student's surname (press ! after input): " << std::endl;
		std::cin >> surname;
		
		arr[i].set(name, surname);
	}
	std::cout << std::endl;

	for (int i = 0; i < 3; ++i) {
		arr[i].get();
	}

	return 0;
}


