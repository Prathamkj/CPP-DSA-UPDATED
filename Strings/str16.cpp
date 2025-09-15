Count And Say Sequence

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

- countAndSay(1) = "1"
- countAndSay(n) is the way you would "say" the previous term.

For example, the sequence goes:

1. "1"
2. "11" (one 1)
3. "21" (two 1s)
4. "1211" (one 2, then one 1)
5. "111221" (one 1, one 2, then two 1s)
6. "312211" (three 1s, two 2s, then one 1)

class Solution {
public:
    string countAndSay(int n) {
        // Count and Say
        if(n == 1) return "1";
        string say = countAndSay(n-1);
        // recursively call isliye kar rhe hai because we have to find the previous term
        // and then we have to process that previous term
        // now we will do the processing
        string result = "";
        for(int i=0; i<say.length(); i++){
            char ch = say[i];
            // character each in string
            int count = 1;
            while(i < say.length() - 1 && say[i] == say[i+1]){
                count++;
                i++;
            }
            result = result + to_string(count) + string(1, ch);
            // Adding the count string and the character to the result
            // to_string(count)  Converts a number (int, long, double, etc.) into a string.
            // Converts a number (int, long, double, etc.) into a string.
            // --- Creates a string object from a character.
            // --------- string s1(5, 'a');   // s1 = "aaaaa"   (5 copies of 'a')  ----------
            // count ko bhi string me convert karna padega 
        }
        return result;
    }
};


// JAVA CODE

class Solution {
    public String countAndSay(int n) {
        // Base case
        if (n == 1) return "1";

        // Recursive call
        String say = countAndSay(n - 1);
        // 

        // Process the previous result
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < say.length(); i++) {
            char ch = say.charAt(i);
            int count = 1;
            // Count consecutive same characters
            // count the numbers 
            while (i < say.length() - 1 && say.charAt(i) == say.charAt(i + 1)) {
                count++;
                i++;
            }

            // Append count and character
            result.append(count).append(ch);
        }

        return result.toString();
    }
}
