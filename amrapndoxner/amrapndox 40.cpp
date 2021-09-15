#include <iostream>
int fucktorial(int);

int main() {
  
int tiv;
std::cout<< "Enter drakan number\n";
std::cin>>tiv;
do {
  std::cout<<"asinq drakan\n";
  std::cin>>tiv;
} while (tiv<=0);

std::cout<<"the factorial of "<<tiv<<" is "<<fucktorial(tiv)<<std::endl;
    return 0;
}

int fucktorial(int num){ 
  if (num==1){ 
      return 1; 
    }
return (num * fucktorial(num-1));
}