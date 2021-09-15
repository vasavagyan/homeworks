#include <iostream>
double m2km(double);

int main()
{
  std::cout<<"enter the distance in meters:  ";
  double meters;
  std::cin>>meters;
  double km = m2km(meters);
  std::cout<<"that's equal to "<<km<<" km's"<<std::endl;

return 0;
}

double m2km(double distance){
  distance/=1000;
return distance;
}