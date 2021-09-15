#include <iostream>
void hakarak(int arr[], int size);

int main() {
  const int size=5;
  int arr[size];
  std::cout<<"enter 5 numbers"<<std::endl;
  for (int i=0; i<size; ++i)
    std::cin>>arr[i];
  
hakarak(arr, 5);
    return 0;
}

void hakarak(int arr[], int size){
    for (int i=size-1; i>=0; --i)
    std::cout<<arr[i]<<' ';
return ;
}