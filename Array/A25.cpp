678. Valid Parenthesis String
// Here we Are carrying a range and trying out every possible outcome..
class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;

        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else {
                leftMin--;   
                leftMax++;
            }
            if (leftMin < 0) leftMin = 0;
            if (leftMax < 0) return false;
        }
        
        return leftMin == 0;
    }
};