#include <iostream>
#include <vector>
void dec2bin(int);

int main() {
  std::cout<<"enter a decimal number to see the binary version:  ";
  int tiv;
  std::cin>>tiv;
  dec2bin(tiv);
    
return 0;
}

void dec2bin(int num) {
  std::vector <int> bin;
  while(num>0){
    bin.push_back(num%2);
    num = num/2;
   }
  for (auto i=bin.rbegin(); i!=bin.rend(); ++i)
    std::cout<<*i;
return ;
 }
