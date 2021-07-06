#include <iostream>

double vol(double radius); //for sphere
double vol(double radius, double height); //for cylinder

int main() {

  std::cout<<"enter the radius and the height\n";
  double r = 0, h = 0;
  std::cin>>r>>h;
  std::cout<<"the volume of sphere is "<<vol(r)<<std::endl;
  std::cout<<"the volume of cylinder is "<<vol(r, h)<<std::endl;

    return 0;
}

//for sphere
double vol(double radius){
  double PI = 3.14;
  double v = (4*PI*radius*radius*radius)/3;
  return v;  
}

//for cylinder
double vol(double radius, double height){
  double PI = 3.14;
  return PI*radius*radius*height;
}