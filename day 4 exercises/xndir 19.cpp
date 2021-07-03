#include <iostream>
#include <string>

void print_numbers(std::string);

int main(){
  std::string naxadasutyun ="";
  std::cout<<"mutqagreq naxadasutyun:"<<std::endl;
  getline(std::cin, naxadasutyun);
  std::cout<<"naxadasutyan mech kan senc tver:  ";
  print_numbers(naxadasutyun);

  return 0;
}

void print_numbers(std::string line){
  for (int i=0; i<line.size(); ++i){
    if ((line[i]>=48&&line[i]<=57) && (line[i+1]<48||line[i+1]>57)){
      std::cout<<' '<<line[i]<<' ';
      } else if (line[i]>=48&&line[i]<=57){
      while (line[i]>=48&&line[i]<=57){
       std::cout<<line[i];
       i++;
       if (line[i]<48 || line[i]>57){
          std::cout<<' ';
        }
      }
    }
  }
 
  return ;
}