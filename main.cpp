/*
Cody Long
CS 219
*/

#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin("Programming-Project-1.txt");
    uint32_t hexresult;

    if(fin.is_open()){
        std::string operation;
        uint32_t hexnum1, hexnum2;
        while(fin >> operation >> std::hex >> hexnum1 >> hexnum2){
                hexresult = hexnum1 + hexnum2;
               std::cout << operation << ":" << " " << "0x" << hexnum1 << " " << "+" << " " << "0x" 
               << hexnum2 << " " << "=" << " " << "0x" << std::hex << hexresult << std:: endl;
        }
    }
    fin.close();
}