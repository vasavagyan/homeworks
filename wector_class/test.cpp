#include "wector.h"
#include <iostream>

int main(){
	Wector wec;
	wec.push_back(7);
	wec.push_back(9);
	wec.push_back(2);
	wec.push_back(4);

	std::cout << "wec has 4 push_back done\nwec values are:" << std::endl;

	for(int i=0; i < wec.size(); ++i){
		std::cout << "wec[" << i << "] is " << wec[i] << std::endl;
	}

	int input1, input2;
	std::cout << '\n'  << "enter a value and index to insert in Wector" << std::endl;
	std::cin >> input1 >> input2;

	wec.insert(input1, input2);

	std::cout << "wec values are:" << std::endl;

	for(int i=0; i < wec.size(); ++i){
		std::cout << "wec[" << i << "] is " << wec[i] << std::endl;
	}

	std::cout << std::endl << "checking if wec is empty or not" << std::endl;

	bool result = wec.is_empty();
	if(result){
		std::cout << "result is true" << std::endl;
	}
	else{
		std::cout << "result is false" << std::endl;
	}

	std::cout << std::endl << "enter index to erase the value at that index:" << std::endl;
	std::cin >> input1;
	wec.erase(input1);
	std::cout << "wec values are:" << std::endl;
	for(int i=0; i < wec.size(); ++i){
		std::cout << "wec[" << i << "] is " << wec[i] << std::endl;
	}

	std::cout << "enter a number for resizing wector and a value" << std::endl;
	std::cin >> input1 >> input2;
	wec.resize(input1, input2);
	std::cout << "size is " << wec.size() << std::endl;
	std::cout << "wec values are:" << std::endl;

	for(int i=0; i < wec.size(); ++i){
		std::cout << "wec[" << i << "] is " << wec[i] << std::endl;
	}

//	wec.clear();
	std::cout << "wec is cleared:" << std::endl;

	std::cout << "wec values are:" << std::endl;
	for(int i=0; i < wec.size(); ++i){
		std::cout << "wec[" << i << "] is " << wec[i] << std::endl;
	}

	return 0;
}
