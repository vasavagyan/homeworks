#include "stack.h"

template <typename T>
Stack<T>::Stack() {};

template <typename T>
Stack<T>::Stack(const T& val)
{
	m_vec.push_back(val);
}

template <typename T>
void Stack<T>::push(const T& val)
{
	m_vec.push_back(val);
}

template <typename T>
T Stack<T>::pop()
{
	T val = m_vec(m_vec.size() - 1);
	m_vec.erase(m_vec.size() - 1);

	return val;
}

template <typename T>
bool Stack<T>::is_empty() const
{
	return m_vec.empty() ? true : false;
}

template <typename T>
int Stack<T>::size() const
{
	return m_vec.size();
}
