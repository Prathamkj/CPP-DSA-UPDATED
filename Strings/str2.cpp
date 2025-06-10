#include <iostream>
using namespace std;
// maximum occurance of a characterr

char getMaxOccCharacter(string str)
{
    int arr[26] = {0};
    // int arr[26] = {0};
    //{0} -- it will assing all 26 values of array = 0 
    // if we don't assign it will take garbage value
    // Here we are creating an array of 26 size - from 0 index to 25
    // because here we want to count the occurance -- so in order to count the occurance we have to assign the array = 0

    // 26 size ka array
    // then traversing the string

    // Here we created an arrray of count of characters
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // 
        int number = ch - 'a';
        // Number will contain the index of the character in the array
        // from 0 to 25
        // Here we created an array count
        arr[number]++;
    }
    // to find the maximum
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {

        if (maxi < arr[i])
        {
            ans = i;
            // ans will contain the index of the character in the array
            // from 0 to 25
            maxi = arr[i];
            // maxi will contain the maximum value of the array
        }
    }
    // this 'a' we use to convert the index of the charecter to the characterrr itself
    // 'a' is the first character of the alphabet   --- 0
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