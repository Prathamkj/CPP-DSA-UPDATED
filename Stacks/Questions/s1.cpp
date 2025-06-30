20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            // initializing the character to string
            // and then pusing in the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty()){
                    return false;
                }
                // so there is only one element in the stack so we will get the 
                // same element
                // if stack is empty the return false..
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        // In C++, stack.empty() is a function that returns true if the stack is empty, and false otherwise.
        return st.empty();
    }
};
