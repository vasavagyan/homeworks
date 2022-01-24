#ifndef QUEUE_H
#define QUEUE_H

#include <list>

template <typename T>
class Queue<T>
{
public:
	Queue();
	Queue(const T&);

	void push(const T&);
	T pop();
	int size() const;
	bool is_empty() const;

private:
	std::list<T> m_ls;
};

#endif
