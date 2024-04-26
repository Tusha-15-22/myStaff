#include <iostream>
#include<string>
using namespace std;

int main (){
    // initialising an array 
    std:: string myElements [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // checking for a string that starts with letter B
    for (int i = 0; i < 8; i++){
        
        if (myElements[i].substr(0,1)=="B"){
            std::cout<<"the strings that contain B are \n"<<myElements[i]<< std::endl;
        }
    }
    
    return 0 ; 


}