#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    int space = 2*(n-1);
    for (int i = 0; i <n; i++)
    {  
        for(int j = 1; j <= i; j++){
            cout<<j;
        }

        for(int j = 1; j <= space; j++){
            cout<<" ";
        }
        // third wala loop ulta chalaya hai bhaisabhh
        for(int j = i; j >=1; j--){
            cout<<j;
        }

        cout<<endl;
        // is line me hum space isliye print kar rhe hai because humne iske liye 2*(n-1) value assign kiya hai
        space = space - 2;
    }
    return 0;
}