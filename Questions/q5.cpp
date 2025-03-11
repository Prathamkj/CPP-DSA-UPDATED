#include <iostream>
using namespace std;

//  COUNT THE NUMBERS
int main(){
    int n;
    cout<<"Enter the number of n ";
    cin>>n;
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
}