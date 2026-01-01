#include <iostream>
using namespace std;
int main(){

    // 2d Array define
    int arr[4][3] = {{1,2,3} , {4,3,6}, {4,6,9}, {4,10,11}};    
    // individual row ko  individual array 
    // 4 row and 3 column
    int rows = 4;
    int cols = 3;
    cout<< arr[2][1]<<endl;
    // so it will print second row of 1 st column
    cout<<endl;
    // loops
    // we can also take input
     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
        // it requires 2 loops to print the Array
    }
    // printing the values
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}