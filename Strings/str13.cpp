8. String to Integer (atoi)

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long num = 0;   // use long to detect overflow
        int sign = 1;

        // 1. Skip leading spaces
        // skip the spacess , increment the i
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign if present
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            // if the sign is +ve or -ve then 
            // assign the sign as -1 or 1
            // because after we finally return 
            // sign*num then it will automatically converted to the -ve value
            if (s[i] == '-') {
                sign = -1;  // negative number
            } else {
                sign = 1;   // positive number
            }
            i++;  // move to next character after the sign
        }

        // 3. Convert digits
        while (i < n && isdigit(s[i])) {
            // isdigit is a function used to check if a character is a digit (0–9).
            num = num * 10 + (s[i] - '0');
            // finally converting into the integers

            // 4. Handle overflow
            // Here we are taking care of the sign that is +ve or -ve
            if (sign == 1 && num > INT_MAX) return INT_MAX;
            // if sign is +ve and 
            if (sign == -1 && -num < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * num);
    }
};

// JAVA CODE
 class Solution {
    public int myAtoi(String s) {
        int i = 0, n = s.length();
        long num = 0;  // use long to detect overflow
        int sign = 1;

        // 1. Skip leading spaces
        while (i < n && s.charAt(i) == ' ') {
            i++;
        }

        // 2. Handle sign if present
        if (i < n && (s.charAt(i) == '+' || s.charAt(i) == '-')) {
            if (s.charAt(i) == '-') {
                sign = -1;  // negative number
            } else {
                sign = 1;   // positive number
            }
            i++;  // move to next character after the sign
        }

        // 3. Convert digits
        while (i < n && Character.isDigit(s.charAt(i))) {
            num = num * 10 + (s.charAt(i) - '0');

            // 4. Handle overflow
            if (sign == 1 && num > Integer.MAX_VALUE) return Integer.MAX_VALUE;
            if (sign == -1 && -num < Integer.MIN_VALUE) return Integer.MIN_VALUE;

            i++;
        }

        return (int)(sign * num);
    }
}
