//function with return type std::pair

#include <iostream>
#include <utility>
std::pair<int,int> ankapFunc(int, int);
int main() {
  std::cout << "enter 2 numbers:  ";
  int age1=0, age2=0;
  std::cin>>age1>>age2;
  std::pair<int,int> z;  //declaring a pair
  z = ankapFunc(age1, age2);
  std::cout<<"the sum is  "<<z.first<<std::endl
           <<"the mul is  "<<z.second<<std::endl;
    return 0;
}
std::pair<int,int> ankapFunc(int num1, int num2){
  std::pair<int,int> p;
  p.first = num1+num2;
  p.second = num1 * num2;
  return p;
}