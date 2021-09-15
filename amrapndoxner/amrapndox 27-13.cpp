#include <iostream>
void min_max(int);

int main(){
  std::cout<<"enter a number:  ";
  int tiv;
  std::cin>>tiv;

  min_max(tiv);
  
  return 0;
}

void min_max(int num){
   int min, max;
  min=max=num%10;
  num/=10;
  while(num!=0){
    if(num%10>max){
      max=num%10;
    }else{
      if(num%10<min){
        min=num%10;
        }
    }
    num/=10;
    }
  std::cout<<"min = "<<min<<"\nmax = "<<max;
}
      