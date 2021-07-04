/* lesson 5: exercise 3: 
Write a program that asks the user to input two Boolean values and demonstrates
the result of various bitwise operators on them. */

#include <iostream>
#include <bitset>

int main() {
  std::cout<<"enter 2 boolean values true(1) or false (0)\n";
  bool b1 = false, b2 = false;
  std::cin>>b1>>b2;

  std::bitset<1> bitwiseNOT = (~b1);
  std::cout<<"logical NOT with b1 is "<<bitwiseNOT<<std::endl;

  std::bitset<1> bitwiseOR = (b1 | b2);
  std::cout<<"logical OR with b1 and b2 is "<<bitwiseOR<<std::endl;

  std::bitset<1> bitwiseAND = (b1 & b2);
  std::cout<<"logical AND with b1 and b2 is "<<bitwiseAND<<std::endl;
  
    return 0;
}
