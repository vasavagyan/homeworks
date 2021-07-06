#include <iostream>

void accept_array(double*, int);

int main(){
  double arr[3]{1.2, 3.4, 5.6};

  accept_array(arr, 3);

  return 0;
}

void accept_array(double* arr, int size){
  for(int i=0; i<size; ++i){
    std::cout<<arr[i]<<' ';
  }
}