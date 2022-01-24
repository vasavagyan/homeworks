#ifndef STACK_H
#define STACK_H

#include <vector>

template <typename T>
class Stack
{
public:
	Stack();
	Stack(const T&);

	void push(const T&);
	T pop();
	bool is_empty() const;
	int size() const;

private:
	std::vector<T> m_vec;
};

#endif
