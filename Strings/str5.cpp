// 1047. Remove All Adjacent Duplicates In String
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i=0 ;i< s.size() ; i++){
            // element is equal to string toh pop karenge
            if(ans.size() > 0 && ans.back() == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

/*
#include <iostream>           // For input/output operations
#include <unordered_set>      // For using unordered_set (hash set)
using namespace std;

class Solution {
  public:
    // Function to remove duplicate characters from the string
    string removeDuplicates(string &s) {
        unordered_set<char> st;   // To store already seen characters
        string res;               // To build the result string without duplicates

        // Loop through each character in the input string
        for (auto &ch : s) {
            // Check if the character has not been seen before
            if (st.find(ch) == st.end()) {
                res += ch;        // Add character to result string
                st.insert(ch);    // Mark this character as seen
            }
            // If character is already in the set, do nothing (skip it)
        }

        return res;  // Return the final string with duplicates removed
    }
};

int main() {
    string input = "geeksforgeeks";             // Example input string
    Solution sol;                               // Create object of the class
    string output = sol.removeDuplicates(input); // Call the function
    cout << "Output: " << output << endl;       // Print the result

    return 0;  // Exit the program
}


*/