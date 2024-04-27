#include <iostream>

using namespace std;



int main (){
    int rows ,cols;

    cout <<"enter the number of rows < 3 "<<endl;
    cin>>rows;
    cout <<"enter the number of columns < 3 "<<endl;
    cin >> cols ;

    if (!rows >3 && !cols >3){
        cout << "dimensions are execeeding 3"<<endl;
        return 1;
    }
// array declaration of 2D
    double ** twoDimensionArray = new double *[rows];
    for (int i = 0; i <rows;i++){
        twoDimensionArray[i] = new double[cols];

    } 
// using nested loop to allocate values in the arrays
    for (int i = 0; i < rows;i++ ){
        for(int L = 0; L < cols;L++ ){
            twoDimensionArray[i][L] = i *cols + L;

        }
    }
// printing the out put to the the console
for (int i = 0; i < rows;i++ ){
        for(int L = 0; L < cols;L++ ){
            cout<< twoDimensionArray[i][L]<<" ";
        }
        cout<<endl;
}
// deallocation of memory
for(int i = 0; i<rows;i++){
    delete [] twoDimensionArray[i];

}
delete[] twoDimensionArray;
return 0 ;



}