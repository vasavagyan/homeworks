#ifndef DEQUE_H
#define DEQUE_H

#include <vector>

class Deque
{
public:
	int operator[](int) const;
	
	bool is_empty() const;
	int size() const;
	void push_back(int);
	void push_front(int);

private:
	std::vector<int> left;
	std::vector<int> right;
	int m_size{};
};


#endif
