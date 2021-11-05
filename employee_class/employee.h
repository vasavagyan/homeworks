#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee();
	Employee(std::string, int, int, std::string);

public:
	void set(std::string, int, int, std::string);
	void get() const;

private:
	int m_year;
	int m_salary;
	std::string m_name;
	std::string m_address;
};

#endif
