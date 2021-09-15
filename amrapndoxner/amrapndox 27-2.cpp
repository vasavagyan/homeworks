#include <iostream>
void tars_tpel(int num);

int main() {
  std::cout<<"mutqagri tiv:  ";
  int tiv;
  std::cin>>tiv;
  tars_tpel(tiv);

    return 0;
}

void tars_tpel(int num){
  while (num!=0){
    std::cout<<num%10<<"\t";
    num/=10;
  }
}