#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    int start = 1;
    for (int i = 0; i <n; i++)
    {
        if (i%2==0)
        {
            // because even rows pe 1 aa rha hai
            start = 1;
        }
        else{
            start = 0;
        }
        
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
       
        cout<<endl;
    }
    return 0;
}
/* 1
   0 1
   1 0 1
   0 1 0 1
*/