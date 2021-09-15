#include <iostream>
#include <string>
void wout_vow(std::string name);

int main() {
  std::cout << "Enter your name: ";
  std::string name;
  getline(std::cin, name);
  
wout_vow(name);
return 0;
}

void wout_vow(std::string name){
   for (int i=0; i<name.size(); ++i){
    if (name[i]!=97&&name[i]!=101&&name[i]!=105
         &&name[i]!=111&&name[i]!=117&&name[i]!=121
         &&name[i]!=65&&name[i]!=69&&name[i]!=73
         &&name[i]!=79&&name[i]!=85&&name[i]!=89)
      
      std::cout<<name[i];
     }
return ;
}