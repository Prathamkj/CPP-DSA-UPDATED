290. Word Pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mp;
        unordered_map<string, int> same;

        vector<string> words;
        string temp = "";

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }

        if (pattern.size() != words.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            mp[pattern[i]] = i;
            same[words[i]] = i;
        }

        for (int i = 0; i < pattern.size(); i++) {
            if (mp[pattern[i]] != same[words[i]])
                return false;
        }

        return true;
    }
};
