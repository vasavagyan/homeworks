#include <iostream>
void print_hitleraktiv(int);

int main() {
  std::cout<<"enter an integer\n";
  int num;
  std::cin>>num;
  print_hitleraktiv(num);
  
  return 0;
}

void print_hitleraktiv(int yo){
  while (yo>=0){
    std::cout<<yo<<'\t';
    --yo;
  }
  return ;
}