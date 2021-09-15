#include <iostream>
#include <string>

struct Student {
       std::string name;
       short age;
       };
void cin_Student(Student& yo);

int main(){
  Student first;
  Student second;
  
  cin_Student(first);
  cin_Student(second);
  

  if(first.age>second.age){
    std::cout<<first.name<<" is older than "<<second.name<<std::endl;
  } else if(first.age==second.age){
    std::cout<<first.name<<" & "<<second.name<<" are same years old\n";
  } else {
    std::cout<<first.name<<" is younger than "<<second.name<<std::endl;
  }

return 0;
}  

void cin_Student(Student& yo){
  std::cout<<"enter Student parameters"<<std::endl<<"name: ";
  getline(std::cin, yo.name);
  std::cout<<"age:  ";
  std::cin>>yo.age;
return ;
}