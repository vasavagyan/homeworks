#include <iostream>
int fibonum(int ind);

int main() {
  std::cout<<"fibonachi tveric vorerord tivn a petq?\n";
  int index;
  std::cin>>index;
  std::cout<<"hesa vegal: "<<fibonum(index)<<std::endl;
  
  return 0;
}

int fibonum(int ind){
  int num[ind];
  num[0]=0;
  num[1]=1;
  for (int i=2; i<ind; ++i){
    num[i]=num[i-1]+num[i-2];
  }
  return num[ind-1];
}