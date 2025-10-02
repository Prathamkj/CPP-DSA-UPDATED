public class FairSplits {
    public static int countFairSplits(int N, int[] A) {
        int totalSum = 0;
        for (int num : A) {
            totalSum += num;
        }

        int count = 0;
        int prefixSum = 0;

        // Check splits before the last element
        for (int i = 0; i < N - 1; i++) {
            prefixSum += A[i];
            int suffixSum = totalSum - prefixSum;

            if (Math.abs(prefixSum - suffixSum) % 2 == 0) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int N = 5;
        int[] A = {10, 10, 3, 7, 6};

        int result = countFairSplits(N, A);
        System.out.println("Number of fair splits = " + result);
    }
}
