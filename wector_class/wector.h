#ifndef WECTOR_H_
#define WECTOR_H_

#include <iostream>

class Wector
{
	public:
		int at(int);
		void push_back(int);
		void pop_back();
		bool is_empty();
		void insert(int, int);
		void erase(int);
		void resize(int, int);
		void clear();
		int size();
		int capacity();
		void shrink_to_fit();

		//ctor dtor operators
		Wector();
		Wector(const Wector&);
		Wector& operator=(const Wector&);
		int operator[](int);

		~Wector();
	
	private:
		int m_size;
		int m_cap;
		int* m_buf;
};
#endif
