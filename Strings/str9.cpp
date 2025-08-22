
Anagram

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.size() != s2.size()) return false;

        string a = s1;
        string b = s2;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) return true;
        else return false;

    }
};

import java.util.Arrays;

class Solution {
    public boolean areAnagrams(String s1, String s2) {
        // Step 1: Check length
        if (s1.length() != s2.length()) return false;

        // Step 2: Convert to char arrays for sorting
        char[] a = s1.toCharArray();
        char[] b = s2.toCharArray();

        // Step 3: Sort both arrays
        Arrays.sort(a);
        Arrays.sort(b);

        // Step 4: Compare sorted arrays
        return Arrays.equals(a, b);
    }
}
