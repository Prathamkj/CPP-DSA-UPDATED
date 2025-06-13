Detect Capital 

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word[i])) {
                count++;
            }
        }
        // Now check all three valid cases
        if(count == word.size()) return true; // All uppercase
        if(count == 0) return true;           // All lowercase
        if(count == 1 && isupper(word[0])) return true; // Only first is capital

        return false; // Anything else is invalid
    }
};
