#include <iostream>
const int size=3;
void glx_ank(int arr[][size], int column);

int main() {
  
  int matric[size][size];
  std::cout<<"mutqagri matrici 9 element"<<std::endl;
  for (int i=0; i<size; ++i){
    for (int j=0; j<size; ++j){
      std::cin>>matric[i][j];
    }
    std::cout<<std::endl;
  }
  
  std::cout<<"glxavor ankyunagci elementner@:"<<std::endl;
  glx_ank(matric, size);
    return 0;
}

void glx_ank(int arr[][size], int column){
  for (int i=0, j=0; j<column; ++i, ++j){
    std::cout<<arr[i][j]<<'\t';
  }
}