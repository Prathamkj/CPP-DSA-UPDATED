12. Integer to Roman

class Solution {
public:
    string intToRoman(int num) {
        vector<int> values = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
            // gratest se leke smallest tak 
            // mapping 
        };
        vector<string> symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };
        string result = "";
        // final answer
        for (int i = 0; i < values.size(); i++) {
            while (num >= values[i]) {
                // if num is grater then value than 
                num -= values[i];
                // subptracting the values and 
                // adding result into the answer 
                result += symbols[i];
            }
        }
        return result;
    }
};