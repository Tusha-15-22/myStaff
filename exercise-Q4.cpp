#include <iostream>
using namespace std;

int main(){

    while (true){
        int Integer_value ;
        cout << "enter an integer between 5 and 10\n";
        cin>>Integer_value ;
        cout<<endl;

        if (Integer_value>=5 && Integer_value<=10){
            cout << "your input value "<<"("<<Integer_value<<") has been accepted."<<endl;
            return 0;

        }
        else {
            cout<< "you entered "<< Integer_value<<". Please enter a number between 5 and 10\n.";
            continue;
        }
        
    }
}