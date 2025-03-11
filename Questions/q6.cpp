// Calculator
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number of a";
    cin >> a;
    int b;
    cout << "Enter the Number of b";
    cin >> b;
    int output;
    cout << "Enter the Output";
    cin >> output;
    switch (output)
    {
    case '+':
        cout << (a + b);
        break;

    default:
        break;
    }
    cout << output;
}