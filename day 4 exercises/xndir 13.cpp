#include <iostream>
#include <vector>

int main() {
  const int n=3;
  const int m=3;
  int matrix[n][m];
  std::vector <int> arr;
  int arr1d[n*m];
  std::cout<< "Enter "<< m*n << " numbers for 2d array:\n";
  for (int i=0; i<n; ++i){
      for (int j=0; j<m; ++j){
          std::cin>> matrix[i][j];
      }
    std::cout<<std::endl;
  }
  for (int i=0; i<n; ++i){
      for (int j=0; j<m; ++j){
          arr.push_back (matrix[i][j]);
      }
  }
  // vektori elementner@ texapoxum enq sovorakan int zangvaci mech
  for (int i=0; i<arr.size(); ++i){
      arr1d[i]=arr[i];
    }     

  for (int i=0; i<n*m; ++i){
    std::cout<<arr1d[i]<<'\t';
  }
  arr.clear();

return 0;
}