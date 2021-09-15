#include <iostream>
#include <string>

void tars_anun(std::string name);

int main() {
   std::cout << "Enter your name: ";
   std::string name;
   std::cin >> name;
   tars_anun(name);

  
    return 0;
}

void tars_anun(std::string name){
   char tmp;
   int i, j;
      for (j=0, i =name.size()-1; j<i; --i, ++j)
     { 
      tmp = name[i];
      name[i] = name[j];
      name[j] = tmp;
     } 
   std::cout<<name;
}