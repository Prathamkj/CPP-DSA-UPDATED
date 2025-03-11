#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    for (int i = 0; i<n; i++)
    { 
        // for the spaces
        // we print n-i-1 spaces
        for (int j =0; j<n-i-1; j++)
        {
           cout<<" ";
        }
        // for numbersm = 1
        for(int j = 1; j<=i+1;j++){
            cout<<j;
            // j print kiya 
        }
        // for  numbersm = 2
        // isme loop i times run karega 
        for(int j = i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
// Pyramindd Pattern