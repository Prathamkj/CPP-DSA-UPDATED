import java.util.*;
// It is actually a Java Code 
public class ConvertToPermutation {

    public static int minOperationsToPermutation(int N, int[] A) {
        Arrays.sort(A); // Step 1: Sort the array to align duplicates
        int operations = 0;

        // Step 2: Compare each element with expected value (i+1)
        for (int i = 0; i < N; i++) {
            int expected = i + 1;
            if (A[i] < expected) {
                operations += (expected - A[i]); // count how many increments needed
                A[i] = expected; 
                // fix Array value to the new expected value 
            }
        }
        return operations;
    }

    public static void main(String[] args) {
        int N = 5;
        int[] A = {1, 1, 3, 3, 4};
        System.out.println(minOperationsToPermutation(N, A)); // Output: 2
    }
}
