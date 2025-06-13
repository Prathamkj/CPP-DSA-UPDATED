class Solution {
public:

// remove the outermost parentheses from a string of valid parentheses
    string removeOuterParentheses(string s) {
       // int n = s.size();
        string ans="";
        int count = 0;
        for(char ch:s)
        {
            if(ch=='(' && count==0)
            {
                count++;
            }
            else if(ch=='(' && count>=1)
            {
                ans = ans + ch;
                count++;
            }
            else if(ch==')' && count>1)
            {
                ans = ans + ch;
                count--;
            }
            else if(ch==')' && count==1)
            {
                count--;
            }
        }
        return ans;
    }
};


Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.

class Solution {
public:
    bool isBalanced(string s) {
        string stack = "";

        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                stack += ch;
            } else {
                if(stack.empty()) return false;

                char last = stack.back();
                if((ch == ')' && last == '(') ||
                   (ch == '}' && last == '{') ||
                   (ch == ']' && last == '[')) {
                    stack.pop_back();
                } else {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};

