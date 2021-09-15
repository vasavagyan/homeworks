#include <iostream>
#include <string>

void print_amenakarj(std::string);

int main(){
  std::string naxadasutyun ="";
  std::cout<<"mutqagreq naxadasutyun:"<<std::endl;
  getline(std::cin, naxadasutyun);
  std::cout<<"naxadasutyan amenakarj toxn e:  ";
  print_amenakarj(naxadasutyun);

  return 0;
}

void print_amenakarj(std::string line){
  
  int count_space = 0;
  for (int i=0; i<line.size(); ++i){
    if (line[i]==' '){
      ++count_space;
    }
  }
  std::string word[count_space+1];
  
  for (int i=0; i<=count_space; ++i){
    for (int j=0; j<line.size(); j++){
      if (line[j] != ' '){
        word[i][j] = line[j];
      } else{
        break;
      }
    }
  }
  std::string karj =word[0];
  for (int i=1; i<=count_space; ++i){
    if (word[i].size() < karj.size()){
       karj = word[i];
    }
  }
  std::cout<<karj;
  return ;
}