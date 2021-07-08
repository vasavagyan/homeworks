#include <iostream>
#include <string>

std::string tars_string(std::string&);

int main() {
  std::cout << "mutqagri tox:  ";
  std::string tox;
  getline(std::cin, tox);

  std::cout<<"tars karda:  "<<tars_string(tox)<<std::endl;
    return 0;
}

std::string tars_string(std::string& line){
  for (int i=0; i<line.size(); ++i){
    char tmp=line[0];
    line[0]=line[line.size()-1];
    line[line.size()-1]=tmp;
  }

  return line;
}