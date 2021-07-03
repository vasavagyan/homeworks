#include <iostream>
void mul_arr(int arr1[], int arr2[], int size1, int size2);

int main()
{
  const int size1=3, size2=5;
  int arr1[size1];
  int arr2[size2];
  std::cout<<"enter array 1 values: "<<std::endl;
  for (int i=0; i<size1; ++i){
    std::cin>>arr1[i];
  }
  std::cout<< "enter array 2 values: "<<std::endl;
  for (int i=0; i<size2; ++i){
    std::cin>>arr2[i]; 
  }
  mul_arr(arr1, arr2, size1, size2);

  
    return 0;
}

void mul_arr(int arr1[], int arr2[], int size1, int size2){
   std::cout<<"(array 1) * (array 2) values "<<std::endl;
  int mul[3];
  for (int i=0; i<size1; ++i){
    mul[i]=arr1[i]*arr2[i];
    std::cout<<mul[i]<<std::endl;
  }
return ;
}