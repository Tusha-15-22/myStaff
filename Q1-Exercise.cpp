#include <iostream>
#include<cstdlib>
using namespace std;

int main (){

    int daysUntilExpiration;
    daysUntilExpiration = rand() % 12;
    
    // days less than equal to 10 
    if (daysUntilExpiration <= 10){
        cout << "your subscription will expire soon. Renew now!"<<endl;

    }
    //days less than equal to 5
    else if (daysUntilExpiration<=5){
        cout <<"Your subscription expires in "<<daysUntilExpiration<<"\n Renew now and save 10%! "<<endl;
        
    }
    //value of days below 1 
    else if (daysUntilExpiration<=1){
    cout << "Your subscription expires within a day\n";
    cout << "Renew now and save 20%! ";
    }
    // none of the days remaining
    else if (daysUntilExpiration == 0){
        cout << "Your subscription has expired.\n";

    }

    // when the value of days remaining is greater than 10

    else if (daysUntilExpiration>=0 && daysUntilExpiration >=10){
        cout << "You have an active subscription.\n";
    }






}