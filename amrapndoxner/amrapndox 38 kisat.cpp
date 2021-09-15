#include <iostream>
const short SIZE=5;
struct Point {
             int x;
             int y;
             };

struct Line  {
             Point ketik[SIZE];
             };
void cin_structure(Line& yo);

int main(){
  
  Line gic;
  cin_structure(gic);

return 0;
}  

void cin_structure(Line& yo){
  std::cout<<"enter x & y coordinates for "<<SIZE<<" points"<<std::endl;
  for (int i=0; i<SIZE; ++i){
  int num_coord = i+1;
  std::cout<<"x & y  "<<num_coord++<<std::endl;
  std::cin>>yo.ketik[i].x>>yo.ketik[i].y;
  }
}