#include <iostream>      // For input and output (cin, cout)
#include <string>        // To use the string data type
#include <cctype>        // For character functions like tolower() and isalpha()
using namespace std;     // To avoid writing std:: before every standard function

// Function to find the character with the highest occurrence (case-insensitive)
char getMaxOccCharacter(const string &str) {
    int count[26] = {0};  // Array to count frequency of each letter (a-z), all initialized to 0

    // Loop through each character in the string
    for (char ch : str) {
        if (isalpha(ch))         // Check if the character is an alphabet letter (ignores digits, symbols, etc.)
        {
            ch = tolower(ch);    // Convert uppercase letter to lowercase
            count[ch - 'a']++;   // Increment count for this letter
        }
    }

    int maxIdx = 0;              // Variable to store index of most frequent character
    for (int i = 1; i < 26; i++) // Loop through the count array from index 1 to 25
    {
        if (count[i] > count[maxIdx]) // If current letter's count is more than max so far
            maxIdx = i;               // Update index of most frequent letter
    }

    return 'a' + maxIdx;         // Convert index back to character and return it
}

int main() {
    string str;                  // Declare a string variable to hold user input
    cout << "Enter the string: "; // Prompt user to enter a string
    getline(cin, str);          // Read the full line of input (including spaces)

    // Call the function and display the most frequent character
    cout << "Most frequent character: " << getMaxOccCharacter(str) << endl;

    return 0;                   // Return 0 to indicate successful execution
}
