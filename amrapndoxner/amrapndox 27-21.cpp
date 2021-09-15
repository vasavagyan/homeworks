#include <iostream>
void sum_arr(int arr1[], int arr2[], int size1, int size2);

int main()
{
  const int size1=3, size2=5;
  int arr1[size1];
  int arr2[size2];
  
  std::cout<<"enter array 1 values(3 numbers): "<<std::endl;
  for (int i=0; i<size1; ++i) {
    std::cin>>arr1[i];
  }
  std::cout<< "enter array 2 values(5 numbers): "<<std::endl;
  for (int i=0; i<size2; ++i) {
    std::cin>>arr2[i]; 
  }
  
  std::cout<<"(array 1) + (array 2) values "<<std::endl;
  sum_arr(arr1, arr2, size1, size2);

return 0;
}

void sum_arr(int arr1[], int arr2[], int size1, int size2){
  int sum[size1];
  
  for (int i=0; i<size2; ++i) {
    if (i<size1) {
    sum[i]=arr1[i]+arr2[i];
    std::cout<<sum[i]<<std::endl;
    } else {
      std::cout<<arr2[i]<<std::endl;
    }
  }
return ;
}