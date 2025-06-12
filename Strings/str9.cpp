
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
