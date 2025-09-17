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
/// 

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0) {
                    // if the count is greater than 0 then only add the character to the answer
                    // because the first '(' is the outermost parenthesis
                    ans += ch;
                }
                // and increment the count
                count++;
            } else {
                // if the character is ')' then decrement the count
                count--;
                if (count > 0) {
                    // if the character is ')' and the count is greater than 0 then only add the character to the answer
                    // because the last ')' is the outermost parenthesis
                    ans += ch;
                }
            }
        }

        return ans;
    }
};
// ///




Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.

class Solution {
public:
    bool isBalanced(string s) {
        string stack = "";
        // if in me se koi bhi character hai to to push it to the string stack
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                stack += ch;
            } else {
                // in else means it is in a closing brakets -- and it is empty then return false
                // if the stack is empty then return false 
                if(stack.empty()) return false;
                // for the last character of the stack
                // if the character is ')' and the last character of the stack is '(' then pop it
                char last = stack.back();
                // 
                if((ch == ')' && last == '(') ||
                   (ch == '}' && last == '{') ||
                   (ch == ']' && last == '[')) {
                    stack.pop_back();
                } else {
                    return false;
                }
            }
        }
        // If we reach here, all opening brackets have been matched
        return stack.empty();
    }
};

// Java code  String only

class Solution {
    public boolean isBalanced(String s) {
        StringBuilder stack = new StringBuilder();

        // iterate over each character
        for (char ch : s.toCharArray()) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.append(ch); // push
            } else {
                // if closing bracket but stack is empty → invalid
                if (stack.length() == 0) return false;

                char last = stack.charAt(stack.length() - 1);

                // check matching pair
                if ((ch == ')' && last == '(') ||
                    (ch == '}' && last == '{') ||
                    (ch == ']' && last == '[')) {
                    stack.deleteCharAt(stack.length() - 1); // pop
                } else {
                    return false;
                }
            }
        }

        // if stack is empty, all matched
        return stack.length() == 0;
    }
}

// With the Help of Java Stack
import java.util.Stack;

class Solution {
    public boolean isBalanced(String s) {
        Stack<Character> st = new Stack<>();

        for (char ch : s.toCharArray()) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.isEmpty()) return false;  // ✅ here we can use isEmpty()

                char last = st.peek();  // top of stack

                if ((ch == ')' && last == '(') ||
                    (ch == '}' && last == '{') ||
                    (ch == ']' && last == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.isEmpty();  // ✅ cleaner
    }
}
