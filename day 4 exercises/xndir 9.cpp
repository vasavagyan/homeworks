//gumarel glxavor ev ojandak ankyunagceri tarreri arjeqner@

#include <iostream>
const int size=3;
int sum_ank_elem(int arr[size][size], int column);

int main() {
  int matric[size][size];
  std::cout<<"mutqagreq 9 elementanoc matric"<<std::endl;
  for (int i=0; i<size; ++i){
    for (int j=0; j<size; ++j){
      std::cin>>matric[i][j];
    }
    std::cout<<std::endl;
  }
 
   std::cout<<"glxavor ev ojandak ankyunagceri tarreri gumar@:  "
            <<sum_ank_elem(matric, size)<<std::endl;
return 0;
}

int sum_ank_elem(int arr[size][size], int column){
  int sum=0;
  for (int i=0, j=0; i<3; ++i, ++j){
    sum += arr[i][j];
  }
  for (int i=size-1, j=0; j<column; --i, ++j){
    if (i<j || i>j){
      sum += arr[i][j];
    }
  }
return sum;
}