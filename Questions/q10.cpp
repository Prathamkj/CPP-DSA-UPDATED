#include<iostream>
using namespace std;
// SWAP THE ALTERNATES NUMBERS
void PrintArray(int array[],int size){
    for(int i = 0; i <size ;i++){
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

void swapAlterntes(int array[],int size){
    for(int i=0;i<size;i=i+2){
        // here we increment i with the 2 because 2 element baad swap karna hai
        if(i+1<size){
        swap(array[i],array[i+1]);
        }
    }

}

int main(){
    // for the even array
    int even[8] = {0,1,2,3,4,5,6,7};
    int odd[5] = {3,5,3,6,3};
    // pahale swap kiya the print kiya
    swapAlterntes(odd,5);
    PrintArray(odd,5);
    swapAlterntes(even,8);
    PrintArray(even,8);

}