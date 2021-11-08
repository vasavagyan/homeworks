#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
	Person();
	Person(int age);
	Person(std::string name);
	Person(std::string name, int age);
public:
	void set_name(std::string name);
	void set_age(int age);
	std::string get_name() const;
	int get_age() const;
public:
	friend std::ostream& operator<<(std::ostream& os, const Person& smb);

private:
	int m_age = 0;
	std::string m_name{};
};

#endif
