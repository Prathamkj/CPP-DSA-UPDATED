#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        // if row exceeds the more starrs will print accordingllys
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
    
        cout<<endl;
    }
    return 0;
}