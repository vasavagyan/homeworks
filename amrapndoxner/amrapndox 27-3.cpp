#include <iostream>
int sum_num(int num);

int main() {
  std::cout<<"mutqagri tiv:  ";
  int tiv;
  std::cin>>tiv;
  std::cout<<"tvanshanneri gumar: "<<sum_num(tiv);

    return 0;
}

int sum_num(int num){
  int sum=0;
  while (num!=0){
    sum += num%10;
    num/=10;
  }
  return sum;
}