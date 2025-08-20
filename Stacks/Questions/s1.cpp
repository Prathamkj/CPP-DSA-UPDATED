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

// Stack Approach

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;

        for (auto ch : s) {
            // check for opening parenthesis
            if (ch == '(') { 
                if (!st.empty()) {
                    ans.push_back(ch);
                }
                st.push(ch); // increase depth
            } 
            else { // ch == ')'
                st.pop(); // decrease depth
                if (!st.empty()) {
                    ans.push_back(ch);
                }
            }
        }
        return ans;
    }
};

// Optimal Approach
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                // then we will increment the count
                if(count > 0){
                    ans.push_back(s[i]);
                }
                count++;
            }
            else{
                // reset the count
                count--;
                if(count > 0){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};