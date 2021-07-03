#include <iostream>
#include <string>

void print_amenakarj(std::string);

int main(){
  std::string naxadasutyun ="";
  std::cout<<"mutqagreq naxadasutyun:"<<std::endl;
  getline(std::cin, naxadasutyun);
  std::cout<<"naxadasutyan amenakarj barn e:  ";
  print_amenakarj(naxadasutyun);

  return 0;
}

void print_amenakarj(std::string line){
  std::string minWord = line;
  std::string tmpWord = ""; 

  //minchev amen prabel pahum a tmp-i mech u hamematum chap@
  for (int i=0; i<line.size(); ++i){
    if (line[i] != ' '){
      tmpWord += line[i];
    } else {
      if(tmpWord.size() < minWord.size()){
        minWord = tmpWord;
      }
    tmpWord = "";
    }
  }
  if (tmpWord !=""){
    if (tmpWord.size() < minWord.size()){
      minWord = tmpWord;
    }
  }
std::cout<<minWord<<std::endl;
  
  return ;
}