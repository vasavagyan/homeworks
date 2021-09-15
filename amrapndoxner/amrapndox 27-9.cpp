#include <iostream>
#include <string>
void turn_cap2(std::string);

int main() {
  std::cout<<"enter a word:  ";
  std::string tox;
  getline(std::cin, tox);

  turn_cap2(tox);

return 0;
}

void turn_cap2(std::string word){
  for (int i=0; i<word.size(); ++i){
    std::cout<<word[i];
    ++i;
    if (word[i]>=97&&word[i]<=122){
      word[i]-=32;          
    }
   std::cout<<word[i];
  }
}