#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    for (int i = 1; i<=n; i++)
    { 
        for (int j = i; j >0; j--)
        // j ko i se shuru kare and i badh rha hai
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}