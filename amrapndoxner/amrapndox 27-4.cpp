#include <iostream>
int mul_num(int num);

int main() {
  std::cout<<"mutqagri tiv:  ";
  int tiv;
  std::cin>>tiv;
  std::cout<<"tvanshanneri artadryal: "<<mul_num(tiv);

    return 0;
}

int mul_num(int num){
  int mul=1;
  while (num!=0){
    mul *= num%10;
    num/=10;
  }
  return mul;
}