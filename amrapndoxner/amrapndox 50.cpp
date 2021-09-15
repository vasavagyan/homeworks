#include <iostream>

float mul_sum_mijin(int* arr);
const int SIZE = 5;

int main(){
  
  std::cout<<"mutqagri "<<SIZE<<" hat tiv\n";
  int zang[SIZE];
  for (int i=0; i<SIZE; ++i){
    std::cin>>zang[i];
  }
  std::cout<<"ayd tveri gumari u artadryali mijin tvabanakann e:  "
           <<mul_sum_mijin(zang);

  return 0;
}

float mul_sum_mijin(int* arr){
  int sum=0;
  int mul=1;
  for (int i=0; i<SIZE; ++i){
    sum+=arr[i];
    mul*=arr[i];
  }
  float mijin = (float)(sum+mul)/2;

  return mijin;
}