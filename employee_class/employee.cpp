#include "employee.h"

#include <iostream>

Employee::Employee(){
	std::string m_name = {};
	int m_year = 0;
	int m_salary = 0;
	std::string m_address = {};
}

Employee::Employee(std::string name, int year, int salary, std::string address){
	m_name = name;
	m_year = year;
	m_salary = salary;
	m_address = address;
}

void Employee::set(std::string name, int year, int salary, std::string address){
	m_name = name;
	m_year = year;
	m_salary = salary;
	m_address = address;
}

void Employee::get() const{
	std::cout << m_name << '\t' << m_year << "\t\t" << m_salary << " - " << m_address << std::endl;
}
