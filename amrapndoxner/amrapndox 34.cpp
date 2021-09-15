#include <iostream>
#include <string>
struct Student {
       std::string name;
       std::string surname;
       short age;
       std::string object1;
       std::string object2;
       };
int main(){
  Student first;
  std::cout<<"enter first Student parameters\nname:  ";
  getline(std::cin, first.name);
  std::cout<<"surname:  ";
  getline(std::cin, first.surname);
  std::cout<<"age:  ";
  std::cin>>first.age;
  std::cout<<"favorite 2 objects:"<<std::endl;
  std::cin.get();
  getline(std::cin, first.object1);
  getline(std::cin, first.object2);
  std::cout<<"here is first Student\n"<<first.name<<std::endl
           <<first.surname<<std::endl<<first.age<<std::endl
           <<first.object1<<'\t'<<first.object2<<std::endl;
return 0;
}