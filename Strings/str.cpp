#include <iostream>
using namespace std;
#include <string>
// Actual string
// in c++ we have inbuild strings
// we can use string class to create a string
int main()
{
    string str;
    cout << " Enter the string ";

    getline(cin, str);
    // to input tthe string

    cout << str << endl;

    // dynamic in nature

    string str1 = "krishna";

    string str2 = str + str1;
    // concatenation of strings

    cout << str2 << endl;

    cout << str2.length() << endl;
    // length of string

    for (int i = 0; i < str2.length(); i++)
    {
        cout << str2[i] << endl;
        //     // har ek element ko print karne ke liye
    }

    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}