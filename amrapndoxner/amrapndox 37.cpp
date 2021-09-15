#include <iostream>

struct Point {
             int x;
             int y;
             };
void cin_structure(Point& yo);

int main(){
  
  Point ketik;
  cin_structure(ketik);

return 0;
}  

void cin_structure(Point& yo){
  std::cout<<"enter x & y coordinates\n";
  std::cin>>yo.x>>yo.y;
}