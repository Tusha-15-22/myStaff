#include <iostream>

using namespace std ; 

int main (){
    
    int* myValue = new int;
     cout << "enter an integer: \n";
     cin >>*myValue;

     cout <<"the integer allocated is: " <<*myValue<<endl;

    delete myValue;
    


    string *thisString = new string ;
    cout <<"enter a string\n";
    cin >>*thisString;

    cout <<"your string is: "<<*thisString<<endl;

    delete thisString;

    return 0 ;


}