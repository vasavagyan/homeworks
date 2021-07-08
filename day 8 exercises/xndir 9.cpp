#include <iostream>
#include <string>

std::string prtem_tapem(std::string&, int);

int main() {
  std::cout << "mutqagri tox:  ";
  std::string tox;
  getline(std::cin, tox);
  std::cout<<"vorerord index-ov element@ hanem?  ";
  int ind;
  std::cin>>ind;

  std::cout<<"qo uzac element@ hanel em:  "<<prtem_tapem(tox, ind)<<std::endl;
  
    return 0;
}

std::string prtem_tapem(std::string& line, int index){
  for (int i=0; i<line.size(); ++i){
    if (i == index){
      line[i]=line[i+1];
      line[line.size()-1] ='\0';
    }
  }

  return line;
}