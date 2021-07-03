#include <iostream>
int min_val_index(int arr[]);

int main() {
  const int size=5;
  std::cout << "Enter 5 numbers:"<<std::endl;
  int num[size];

  for (int i=0; i<size; ++i){
    std::cin>>num[i]; 
  }
  
  std::cout<<"the index of the min value is "<<min_val_index(num)<<std::endl;
  
return 0;
}

int min_val_index(int arr[]){
  int min=arr[0];
  int index=0;
  for (int i=1; i<5; ++i){
    if (arr[i]<min){
      index=i;
    } 
  }
return index; 
}