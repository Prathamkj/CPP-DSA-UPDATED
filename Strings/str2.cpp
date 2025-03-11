#include <iostream>
using namespace std;
// maximum occurance of a characterr

char getMaxOccCharacter(string str)
{
    int arr[26] = {0};
    // 26 size ka array
    // then traversing the string

    // Here we created an arrray of count of characters
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        //
        int number = 0;
        number = ch - 'a';
        // Here we created an array count
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {

        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    cout << getMaxOccCharacter(str) << endl;

    return 0;
}