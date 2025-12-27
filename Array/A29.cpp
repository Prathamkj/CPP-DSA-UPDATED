6. Zigzag Conversion

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string ans = "";
        int jump = (numRows - 1) * 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.size(); j += jump) {
                
                // vertical character
                ans.push_back(s[j]);

                // diagonal character (for middle rows)
                int diag = j + jump - 2 * i;
                // it's like 6 - 2 * i
                if (i > 0 && i < numRows - 1 && diag < s.size()) {
                    
                    ans.push_back(s[diag]);
                }
            }
        }
        return ans;
    }
};

