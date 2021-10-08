#include "wector.h"

//default ctor
Wector::Wector(){
	m_size = 0;
	m_cap = 2;
	m_buf = new int[m_cap];
}

//destructor
Wector::~Wector(){
	if(m_buf != nullptr){
		delete[] m_buf;
	}
}

//operator[]
int Wector::operator[](int index){
	if(index >= m_size or index < 0){
		std::cout << "invalid index, couldn't return value:" << std::endl;
		exit(-1);
	}
	if(m_buf == nullptr){
		std::cout << "wector is cleared" << std::endl;
		exit(-1);
	}
	return m_buf[index];
}

//push_back()
void Wector::push_back(int input){
	if(m_size == m_cap){
		m_cap *= 2;
		
		int* tmp = new int[m_cap];

		for(int i=0; i < m_size; ++i){
			tmp[i] = m_buf[i];
		}

		delete[] m_buf;
		m_buf = tmp;
		tmp = nullptr;
	}

	m_buf[m_size] = input;
	m_size++;

	return;
}

//pop_back()
void Wector::pop_back(){
	if(m_size > 0){
		m_size--;
	}
	return;
}


//is_empty()
bool Wector::is_empty(){
	return m_size > 0 ? false : true;
}

//size()
int Wector::size(){
	return m_size;
}

//capacity
int Wector::capacity(){
	return m_cap;
}

//insert()
void Wector::insert(int value, int index){
	if(index > m_size or index < 0){
		std::cout << "invalid index, insertion failed" << std::endl;
		return;
	}

	if (m_size == m_cap){
		m_cap *= 2;
		int* tmp = new int[m_cap];
		for(int i = 0; i < index; ++i){
			tmp[i] = m_buf[i];
		}
		tmp[index] = value;
		m_size++;
		for(int i = index+1; i < m_size; ++i){
			tmp[i] = m_buf[i-1];
		}
		delete[] m_buf;
		m_buf = tmp;
		tmp = nullptr;
	}
	else if(m_size < m_cap){
		for(int i = m_size; i > index; --i){
			m_buf[i] = m_buf[i-1];
		}
		m_buf[index] = value;
		m_size++;
	}
}

//erase()
void Wector::erase(int index){
	if(index < 0 or index >= m_size){
		std::cout << "invalid index" << std::endl;
		return;
	}

	int* tmp = new int[m_size-1];

	for(int i = 0; i < m_size-1; ++i){
		if(i < index){
			tmp[i] = m_buf[i];
		}
		else{
			tmp[i] = m_buf[i+1];
		}
	}

	delete[] m_buf;
	m_buf = tmp;
	tmp = nullptr;
	m_size--;

	return;
}

//resize()
void Wector::resize(int q, int value){
	if(q <= m_size){
		m_size = q;
	}
	else{
		if(q > m_cap){
			m_cap = q;
			int* tmp = new int[m_cap];

			for(int i=0; i < m_size; ++i){
				tmp[i] = m_buf[i];
			}
			
			for(int i = m_size; i < q; ++i){
				tmp[i] = value;
			}
			delete[] m_buf;
			m_buf = tmp;
			tmp = nullptr;
			m_size = q;
		}
		else{
			for(int i = m_size; i < q; ++i){
				m_buf[i] = value;
			}
			m_size = q;
		}

	}
	return;
}

//clear()
void Wector::clear(){
	m_size = 0;
	m_cap = 2;
	delete[] m_buf;
	m_buf = nullptr;
}
