#include "person.h"

#include <iostream>
#include <string>

Person::Person() : m_age {0}
{
}

Person::Person(int age) : m_age {age}
{
}

Person::Person(std::string name) : m_age {0}, m_name {name}
{
}

Person::Person(std::string name, int age) : m_age {age}, m_name {name}
{
}

void Person::set_name(std::string name)
{
	m_name = name;
}

void Person::set_age(int age)
{
	m_age = age;
}

std::string Person::get_name() const
{
	return m_name;
}

int Person::get_age() const
{
	return m_age;
}

std::ostream& operator<<(std::ostream& os, const Person& smb)
{
	os << "name is:  " << smb.m_name << std::endl;
	os << "age is:  " << smb.m_age << std::endl;

	return os;
}
