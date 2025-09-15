Problem Restatement

You are given a sentence S (words separated by spaces). Find the longest word such that:

Its length is even.

It starts with a vowel (a, e, i, o, u, case-insensitive).

If multiple words qualify with the same maximum length → return the first occurrence.

If no such word exists → return "00".

// code

public class LongestEvenVowelWord {
    public static String findWord(String sentence) {
        String[] words = sentence.split(" ");  // split by spaces
        String result = "00";  // default if no word found
        int maxLen = 0;

        for (String word : words) {
            String lower = word.toLowerCase(); // make case-insensitive

            if (isVowel(lower.charAt(0)) && word.length() % 2 == 0) {
                // if word is vowel and it's length is even
                // update result if this word is longer
                if (word.length() > maxLen) {
                    maxLen = word.length();
                    // jiska max length hoga vo hi answer hoga
                    result = word;  // update answer
                }
            }
        }
        return result;
    }

    // helper function to check vowels
    private static boolean isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    public static void main(String[] args) {
        String input = "I am enjoying online education";
        System.out.println(findWord(input));  // Output: enjoying
    }
}
