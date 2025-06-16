#include<iostream>
using namespace std;
int main(){
    // Array
    int marks[5] = {0,1,88,3,4};
    int age[5] = {0,1,2,3,3};
    // Acess the data we use array indexes
    cout<<marks[2];
    // loop on array
    int size = sizeof(marks);
    cout<<size<<endl;
    // to get the size of array
    for (int array = 0; array < 5; array++){
        cout<<marks[array]<<endl;
        // we can take input
        // cin>>marks[array];
    }
    // taking input

    return 0;
}