public class SimpleExpand {
    public static void main(String[] args) {
        String s = "abcaba";
        String result = "";

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);               // take character
            int firstIndex = s.indexOf(ch) + 1;  // find first index (1-based)

            // repeat character 'firstIndex' times
            for (int j = 0; j < firstIndex; j++) {
                result += ch;
            }

            // add "-" if not the last character
            if (i < s.length() - 1) {
                result += "-";
            }
        }

        System.out.println(result);
    }
}
