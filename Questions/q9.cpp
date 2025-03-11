#include<iostream>
// FIBONACCI CODE
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int a = 0;
    int b = 1;
    int answer;
    if(n==0){
        cout<<"Please Enter a positive number";
    }
    else{
    for (int i = 0; i <n ; i++){
        cout<<" "<<a<<" ";
        int answer = a + b;
        a = b;
        b = answer;
    }
    }
    cout<<b;
    return 0;
}