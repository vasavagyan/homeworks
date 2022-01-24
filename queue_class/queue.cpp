#include "queue.h"

template <typename T>
Queue<T>::Queue() {};

template <typename T>
Queue<T>::Queue(const T& val)
{
	m_ls.push_back(val);
}

template <typename T>
void Queue<T>::push(const T& val)
{
	m_ls.push_back(val);
}

template <typename T>
T Queue<T>::pop()
{
	m_ls.pop_front();
}

template <typename T>
int Queue<T>::size() const
{
	return m_ls.size();
}

template <typename T>
bool Queue<T>::is_empty() const
{
	return m_ls.empty() ? true : false;
}
