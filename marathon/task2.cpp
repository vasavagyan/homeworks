/* Task 2 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void make_capital(std::string&);


int main(){
    std::ifstream fin;
    std::string path = "sourceFile.txt";
    fin.open(path);
    std::string newFileWithCaps ={};  //itogum poxac@ sra mech enq lcelu
    
    if(!fin.is_open()){
        std::cout<<"couldn't open file"<<std::endl;
    }
    else{
        std::string word;
        
        while(!fin.eof()){
            fin>>word;
            make_capital(word);
            newFileWithCaps = newFileWithCaps + ' ' + word;
        }
    }
    fin.close();
    
    std::ofstream fout;
    fout.open(path);
    if(!fout.is_open()){
        std::cout<<"couldn't open file"<<std::endl;
    }
    else{
        fout<<newFileWithCaps;   //poxac string@ lcrinq fayli mech
    }
	fout.close();
	
return 0;
}

void make_capital(std::string& line){
    if(line[0]>=97 && line[0]<=122){
        line[0] -= 32;
    }
    int last = line.size()-1;
    if(line[last]>=97 && line[last]<=122){
        line[last] -= 32;
    }
return ;
}
