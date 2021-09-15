#include <iostream>
int odd_nums(int arr[], int col);

int main(){
  const int Size=5;
  std::cout<<"enter numbers:"<<std::endl;
  int array[Size];
  for (int i=0; i<Size; ++i){
    std::cin>>array[i];
  }
  std::cout<<"the quantity of odd numbers is:  "
           <<odd_nums(array, Size)<<std::endl;

return 0;
}

int odd_nums(int arr[], int col){
  int sum=0;
  for (int i=0; i<col; ++i){
    if(arr[i]%2){
      ++sum;
    }
  }
return sum;
}