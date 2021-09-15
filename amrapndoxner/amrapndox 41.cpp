#include <iostream>
int fucktorial(int);

int main() {
  
int tiv;
std::cout<< "Enter a number\n";
std::cin>> tiv;

std::cout<<"the factorial of "<<tiv<<" is "<<fucktorial(tiv)<<std::endl;


return 0;
}

int fucktorial(int num){
  int result = num;
  if (num==0 || num==1){
    return result;
  } else if (num>1){
      while (num>1){
        result = result * (num-1);
        --num;
      }
    return result;
  } 
}  