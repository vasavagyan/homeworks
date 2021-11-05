#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
	void set(char*, char*);
	void get() const;

private:
	char m_name[20];
	char m_surname[40];
};

#endif
