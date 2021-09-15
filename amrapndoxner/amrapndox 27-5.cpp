#include <iostream>
double calc(int num1, int num2, char oper);

int main() {
  std::cout<<"mutqagri 2 tiv:  "<<std::endl;
  int tiv1, tiv2;
  std::cin>>tiv1>>tiv2;
  std::cout<<"mutqagri gorcoxutyun (+,-,/,*):  ";
  char oper;
  std::cin>>oper;
  calc(tiv1, tiv2, oper);
  
return 0;
}

double calc(int num1, int num2, char oper){

  if (oper == '+'){
      std::cout<<"the sum is: "<<num1 + num2<<std::endl;
    return num1+num2;
  }
  else if (oper == '-'){
      std::cout<<"the sub is: "<<num1 - num2<<std::endl;
    return num1-num2;
  }
  else if (oper == '*'){
      std::cout<<"the mul is: "<<num1 * num2<<std::endl;
    return num1*num2;
  }
  else if (oper == '/'){
      std::cout<<"the div is: "<<(double)num1/num2<<std::endl;
    return num1/num2;
  }
  else 
    do {
      std::cout<<"wrong operator, please enter again: ";
      std::cin>>oper;
    } while (oper!='+' && oper!='-' && oper!='*' && oper!='/');
  return 0.0;
}
