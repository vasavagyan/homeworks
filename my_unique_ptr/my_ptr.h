#ifndef MYPTR_H
#define MYPTR_H

template <typename T>
class MyPtr
{
public:
	MyPtr(T*);	//param ctor
	MyPtr(MyPtr<T>&&) noexcept;	//move
	MyPtr<T>& operator=(MyPtr<T>&& val) noexcept;	//move assignment
	~MyPtr();	//dtor

	MyPtr(const MyPtr<T>& val) = delete;	//deleting copy ctor
	MyPtr<T>& operator=(const MyPtr<T>& val) = delete; //deleting assignment

	T& operator*() { return *m_ptr; }
	T* operator->() { return m_ptr; }

	void reset();

private:
	T* m_ptr = nullptr;
};

#include "my_ptr.hpp"

#endif
