public class TransformString {
    public static int minCost(String S1, String S2) {
        int[] freq1 = new int[26];
        int[] freq2 = new int[26];
        // creating a 2 Arrays here 
        // and counting out the frequencies of Each of the Arrays
        for (char c : S1.toCharArray()) freq1[c - 'A']++;
        for (char c : S2.toCharArray()) freq2[c - 'A']++;
        int cost = 0;
        for (int i = 0; i < 26; i++) {
            if (freq2[i] > freq1[i]) {
                cost += freq2[i] - freq1[i];
            }
        }
        return cost;
    }

    public static void main(String[] args) {
        String S1 = "ABD";
        String S2 = "AABCCAD";
        System.out.println(minCost(S1, S2));
    }
}
