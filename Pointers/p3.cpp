#include<iostream>
using namespace std;
int print(int *ptr){
    cout<<*ptr<<endl;
}

int main(){
    // to pass pointers in function
    // int value = 5;
    // int *ptr = &value;
    // // passed the pointer to the function
    // print(ptr);

    // DOUBLE POINTERS
    int i = 5;
    int *ptr = &i;
    // here ptr is corresponding to ptr2
    int **ptr2 = &ptr;
    cout<<"Printing ptr "<< ptr<<endl;
    cout<<"Printing the value of ptr "<<*ptr<<endl;
    cout<<*ptr2<<endl;
    // ptr2 ke andar ke andar ke address ka valuee
    cout<<**ptr2<<endl;
}