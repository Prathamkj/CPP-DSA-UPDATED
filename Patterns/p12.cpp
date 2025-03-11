#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spacess
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        // spacesss
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
// Trangle pattern