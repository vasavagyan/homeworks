#include <iostream>

char* reverse(char*);

int main(){
  char word[5]= {'h','e','l','l','o'};
  char* p = reverse(word);
  for (int i=0; i<5; ++i){
    std::cout<<p[i];
  }

  return 0;
}

char* reverse(char* line){
  for (int i=0, j=4; i<j; ++i, --j){
    std::swap(line[i], line[j]);
  }
  char* pt = &line[0];
  return pt;
}
