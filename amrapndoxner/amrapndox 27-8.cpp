#include <iostream>
#include <string>
void turn_capit(std::string);

int main() {
  std::cout<<"enter a word:  ";
  std::string tox;
  getline(std::cin, tox);

  turn_capit(tox);
  
return 0;
}

void turn_capit(std::string word){
  for (int i=0; i<word.size(); ++i){
    if (word[i]>=97&&word[i]<=122)
        word[i]-=32;
  std::cout<<word[i];
  }
}