#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout<<" ";
        }   
        for (int j = 0; j < n-i; j++)
        {
            cout<<(i+1);
            // here i print kara toh j yani horizontally j constant rahega
        }
        cout<<endl;
    }
    return 0;
}