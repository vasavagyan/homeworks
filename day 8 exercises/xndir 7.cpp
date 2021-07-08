#include <iostream>
void printArr_rec(int*, int);

int main() {
  
  std::cout<<"zangvaci elementner rekursiv tpac"<<std::endl;
  int num[5] = {1,2,3,4,5};
  printArr_rec(num, 5);
  return 0;
}

void printArr_rec(int* arr, int size){
 
  if (size>0){
  std::cout<<*arr<<'\t';
  arr++;
  printArr_rec(arr, --size);
  }
  return ;
}