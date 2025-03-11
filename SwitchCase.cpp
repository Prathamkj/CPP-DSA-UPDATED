#include <iostream>
using namespace std;
int main()
{
    int number = 2;
    switch (number)
    {
        {
        case 1:
            cout << "First Element";
            break;
        case 2:
            cout << "Second Element";
            break;
        default:
            cout << "It is a default case";
            break;
        }
        // we use break for the stop of the execution
        // aage ka execute na karne ke liye
    }
}