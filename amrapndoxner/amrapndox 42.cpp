#include <iostream>
void print_rec(int);

int main() {
  std::cout<<"enter an integer\n";
  int num;
  std::cin>>num;
  print_rec(num);
  
  return 0;
}

void print_rec(int yo){
  if (yo>=0){
    std::cout<<yo<<'\t';
    print_rec(--yo);
  }
  return ;
}