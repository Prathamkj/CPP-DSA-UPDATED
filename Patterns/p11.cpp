// HOLLOW DIAMOND PATTERN

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // for the first spacess
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        // for the first star
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout<< endl;
    }
        // For Bottom Part
        for (int i = 0; i < n - 1; i++)
        {
            // for spaces
            for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
            }
            cout << "*";
            if (i != n-1)
            {
                for (int j = 0; j < 2 * (n - i) - 5; j++)
                {
                    cout << " ";
                }
                cout << "*";
            }
              cout << endl;
        }
    
    return 0;
}
