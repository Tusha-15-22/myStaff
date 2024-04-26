#include <iostream>
using namespace std ;

int main (){

while (true){    
     int numb ;
    cout <<"please select the area of the shape to calculate  " << endl;
    cout << "1. square "<<endl;
    cout<< "2. rectangle"<<endl;
    cout<< "3.triangle"<<endl;
    cout<<"4. Quit program "<<endl;
    cout <<"Enter the selection: "<< endl;
   cin  >>numb;
   cout << endl;
   
   if (numb==4){
    break;
   }

   switch (numb){
    case 1 : {
    // calculates the area of the square
        int length ,AreaOfaSquare;
        cout << "enter the length: "<<endl;
        cin >>length;
        cout <<endl;

        AreaOfaSquare = length *length;
// the output value 
        cout << "the area of the square is: "<< AreaOfaSquare<< endl;

        break;}

    case 2 :{
    // calculates the area of the rectangle
    int Width, Length,AreaOfRectangle;
    cout << "enter the size of length:  " <<endl;
    cin >>Length;
    cout<<endl;

    cout << "enter the size of width: " <<endl;
    cin >>Width;
    cout<<endl;

    AreaOfRectangle = Length * Width;

    cout <<"the area of the rectangle is: "<< AreaOfRectangle<<endl;

    break;}

    case 3 :{
        // calculates the area of a triangle 

        double base , height, AreaOfTriangle;
        const double a = 0.5;
        cout <<"enter the size of base: "<<endl;
        cin >> base ;
        cout<<endl;

        cout << "enter the value of hieght: "<< endl;
        cin >>height ;
        cout<<endl;

        AreaOfTriangle = a*base*height;

        cout <<"the area of the triangle is: "<<AreaOfTriangle<<endl;

        break;
    }

    

        default:
        cout <<"the value is "<<numb<<" invalid"<<endl;
        continue;
   }
  }

   
    return 0;
}