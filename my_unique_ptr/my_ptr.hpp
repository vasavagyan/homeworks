template <typename T>	//param ctor
MyPtr<T>::MyPtr(T* val) : m_ptr{val}
{
}

template <typename T>
MyPtr<T>::MyPtr(MyPtr<T>&& val)	noexcept //move
{
	m_ptr = val.m_ptr;
	val.m_ptr = nullptr;
}

template <typename T>
MyPtr<T>& MyPtr<T>::operator=(MyPtr<T>&& val) noexcept //move assignment
{
	if (this = val)
		return *this;

	delete m_ptr;
	m_ptr = val.m_ptr;
	val.m_ptr = nullptr;

	return *this;
}

template <typename T>	//dtor
MyPtr<T>::~MyPtr()
{
	delete m_ptr;
}

template <typename T>
void MyPtr<T>::reset()
{
	delete m_ptr;
	m_ptr = nullptr;
}
