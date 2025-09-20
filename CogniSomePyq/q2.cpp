import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        String[] arr = {"abc", "bca", "cdb", "bcd"};
        // created a Hashset here to store unique anagrams
        HashSet<String> set = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            char tempArray[] = arr[i].toCharArray();
            Arrays.sort(tempArray);
            set.add(new String(tempArray));
        }

        System.out.println(set.size());
    }
}
