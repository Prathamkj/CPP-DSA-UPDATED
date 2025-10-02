public class VowelPermutation {

    // Method to calculate factorial of a number
    public static long factorial(int n) {
        long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    // Method to count permutations of consonants in the given string
    // here we Actually are doing the L
    public static long countPermutations(String input) {
        int consonants = 0;

        // Count consonants in the string
        for (char c : input.toCharArray()) {
            if (!"AEIOUaeiou".contains(String.valueOf(c))) {
                consonants++;
            }
        }
        // this is a Better way
        // for (char c : input.toCharArray()) {
        //     char lower = Character.toLowerCase(c);
        //     if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
        //         consonants++;
        //     }
        // }

        // If no consonants, return 0
        if (consonants == 0) {
            return 0;
        }

        // Return factorial of consonants
        return factorial(consonants);
    }

    // Main method
    public static void main(String[] args) {
        String S = "ABC";
        System.out.println("Number of permutations of consonants: " + countPermutations(S));
    }
}
