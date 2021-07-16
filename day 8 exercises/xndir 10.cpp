#include <iostream>

int tvi_tvanshan(int, int);

int main() {
  std::cout<<"mutqagri tiv   ";
  int tiv=0;
  std::cin>>tiv;
  std::cout<<"arajin qani tvanshann es uzum?  ";
  int qanak=0;
  std::cin>>qanak;
  int taza = tvi_tvanshan(tiv, qanak);
  std::cout<<"vegal:  "<<taza;
  
  return 0;  
}  

int tvi_tvanshan(int num, int q){
  int tmp = 0;
  while (num>0){
    tmp = tmp*10 + num%10;
    num/=10;
  }
  int new_num =0;
  for (int i=0; i<q; ++i){
      new_num = new_num*10 + tmp%10;
      tmp/=10;
  }
  return new_num;
}
