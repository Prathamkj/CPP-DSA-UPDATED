389. Find the Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        // Count characters in s
        for (char ch : s) {
            mp[ch]++;
        }

        // Check characters in t
        for (char ch : t) {
            if (mp.find(ch) == mp.end() || mp[ch] == 0) {
                // if this element is not exist then return the character
                return ch;
            }
            mp[ch]--;
        }

        return ' '; // Just for completeness, won't reach here.
    }
};
