#include <iostream>

void arandzin(int num);

 int main()
{
 int num;
 std::cout << " Enter a number:\n";
 std::cin >> num;
 
 arandzin(num);
  
 return 0;
}

void arandzin(int num){
    int tmp=0;
    while (num!=0){
      tmp =tmp*10 + num % 10;
      num /=10;
    }
    while (tmp!=0){
      std::cout<<tmp%10<<"\t" ;
      tmp/=10;
    }
    return ;
  }