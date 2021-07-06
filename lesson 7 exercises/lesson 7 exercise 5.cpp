#include <iostream>

void area(double radius, double& result);
void circumference(double radius, double& result);

int main (){
  std::cout<<"enter the radius  ";
  double r =0;
  std::cin>>r;
  double res = 0;
  area(r, res);
  std::cout<<"area is "<<res<<std::endl;
  circumference(r, res);
  std::cout<<"circumference is "<<res<<std::endl;

  return 0;
}

void area(double radius, double& result){
  double PI = 3.14;
  result = PI * radius * radius;
}

void circumference(double radius, double& result){
  double PI = 3.14;
  result = 2*PI*radius;
}