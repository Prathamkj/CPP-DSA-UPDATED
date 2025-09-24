import java.util.*;

public class WaterTanksEasy {
    public static String findTank(String[] arr) {
        int n = arr.length;
        int[] tanks = new int[n];

        // Convert "0.x" into integer x
        for (int i = 0; i < n; i++) {
            tanks[i] = arr[i].charAt(2) - '0'; // get digit after decimal
        }

        // Total sum of all tanks
        int total = 0;
        for (int val : tanks) total += val;

        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = total - leftSum - tanks[i];

            if (leftSum == tanks[i] + rightSum) {
                return arr[i]; // return the original string
            }
            leftSum += tanks[i];
        }

        return "-1"; // no tank found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.next(); // input like 0.6 0.7 0.3
        }

        System.out.println(findTank(arr));
    }
}
