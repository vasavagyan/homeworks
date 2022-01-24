#include "deque.h"

bool Deque::is_empty() const
{
	return m_size == 0 ? true : false;
}

int Deque::size() const
{
	return m_size;
}

void Deque::push_back(int val)
{
	right.push_back(val);
	++m_size;
}

void Deque::push_front(int val)
{
	left.push_back(val);
	++m_size;
}

int Deque::operator[](int index) const
{
	if (index < left.size())
	{
		return left[left.size() - index - 1];
	}
	return right[index - left.size()];
}
