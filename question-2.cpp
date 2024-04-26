#include <iostream>
using namespace std;

int main (){

    int daysUntilExpiration;
    daysUntilExpiration = rand() % 12;

    switch(daysUntilExpiration){
        case 1 :{
            cout <<"your subscription will expire soon. Renew now!\n";
            break;
        
        }
        case 2 :{
            cout <<"Your subscription expires "<<daysUntilExpiration<<"\n Renew now and save 10%!";
            break;
        }
        case 3 : {
            cout << "Your subscription expires within a day!\n";
            cout <<"Renew now and save 20%!\n";
            break;
        }
        case 4 : {
            cout << "your subscription has expired.\n";
            break;
        }
        default :
            cout <<"You have an active subscription.\n";
                    
        
    }
}