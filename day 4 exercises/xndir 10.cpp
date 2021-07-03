//gumarel glxavor ev ojandak ankyunagceri tarreri arjeqner@

#include <iostream>
const int size=3;
void swap_ank_elem(int arr[size][size], int column);

int main() {
  int matric[size][size];
  std::cout<<"mutqagreq 9 elementanoc matric"<<std::endl;
  for (int i=0; i<size; ++i){
    for (int j=0; j<size; ++j){
      std::cin>>matric[i][j];
    }
    std::cout<<std::endl;
  }
 
   std::cout<<"glxavor ev ojandak ankyunagceri tarrer@ texerov poxenq:  "<<std::endl;
   swap_ank_elem(matric, size);
return 0;
}

void swap_ank_elem(int arr[size][size], int column){
   for (int i=0, j=size-1; i<column; ++i, --j)
    if (i<j || i>j){
      int tmp =arr[i][j];
      arr[i][j] = arr[i][i];
      arr[i][i] = tmp;
    }

  for (int i=0; i<size; ++i){
    for (int j=0; j<size; ++j){
      std::cout<<arr[i][j];
      }
    std::cout<<std::endl;
  }
return ;
}