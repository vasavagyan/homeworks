#include "student.h"

#include <iostream>

void Student::set(char* name, char* surname){
	for (int i = 0; i < 20; i++) {
		m_name[i] = name[i];
	}

	for (int i = 0; i < 40; ++i) {
		m_surname[i] = surname[i];
	}
}

void Student::get() const {
	std::cout << "name is: ";
	for (int i = 0; i < 20; ++i) {
		if (m_name[i] == '!') {
			break;
		}
		std::cout << m_name[i];
	}
	std::cout << std::endl;
	
	std::cout << "surname is: ";
	for (int i = 0; i < 40; ++i) {
		if (m_surname[i] == '!') {
			break;
		}
		std::cout << m_surname[i];
	}
	std::cout << std::endl;
}
