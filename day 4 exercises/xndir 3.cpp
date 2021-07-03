#include <iostream>
int sum_min_max(int arr[]);

int main() {
  const int size=5;
  std::cout << "Enter 5 numbers:"<<std::endl;
  int num[size];

  for (int i=0; i<size; ++i){
    std::cin>>num[i]; 
  }
  
  std::cout<<"the sum of max & min values is "<<sum_min_max(num)<<std::endl;
  
return 0;
}

int sum_min_max(int arr[]){
  int max=arr[0];
  int min=arr[0];
  for (int i=1; i<5; ++i){
    if (arr[i]>max)
      max=arr[i];
  }
  for (int i=1; i<5; ++i){
    if (arr[i]<min)
      min=arr[i];
  }
return min+max; 
}