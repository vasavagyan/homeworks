#include <iostream>
int even_nums(int arr[], int col);

int main(){
  const int Size=5;
  std::cout<<"enter numbers:"<<std::endl;
  int array[Size];
  for (int i=0; i<Size; ++i){
    std::cin>>array[i];
  }
  std::cout<<"the quantity of even numbers is:  "
           <<even_nums(array, Size)<<std::endl;

return 0;
}

int even_nums(int arr[], int col){
  int sum=0;
  for (int i=0; i<col; ++i){
    if(arr[i]%2==0){
      ++sum;
    }
  }
return sum;
}