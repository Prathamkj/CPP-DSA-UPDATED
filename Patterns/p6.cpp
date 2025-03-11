#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    for (int i = 0; i<n; i++)
    { 
        // for spacess
        // i tak spaces aa rhe hai
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        // here hum j ka name same le saakte hai because isme loop different hai

        for (int j = 0; j < n-i; j++)
        {
            cout<<(j);
            // +1 taki 1 se shuru ho jaye
        }
        cout<<endl;
    }
    return 0;
}
// Inverted Trangle Patern