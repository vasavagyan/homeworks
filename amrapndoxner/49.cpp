#include <iostream>
#include <vector>
int* print_num(int, int);

int main() {
  std::cout << "mutqagri tiv\n";
  int tiv;
  std::cin>>tiv;
  std::cout<<"arajin qani tvanshann es uzum?:  ";
  int qanak;
  std::cin>>qanak;
  int* p= print_num(tiv, qanak);
  for (int i=0; i<qanak; ++i){
    std::cout<<p[i]<<'\t';
  }
return 0;
}

int* print_num(int num, int k){
  std::vector <int> vec;
  vec.reserve(10);
  while(num>0){
    vec.push_back(num%10);
    num/=10;
  }
  int arr[k];
  for (int i=vec.size()-1; i>=0; --i){
    int index=0;
    if (k>index){
    arr[index]=vec[i];
    index++;
    }
  }
  vec.clear();
  return arr;
}