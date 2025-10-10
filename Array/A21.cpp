Input : k = 2, arr[] = [ 1, 5, 8, 10 ] Output : 5 Explanation : 
The array can be modified as[1 + k, 5 - k, 8 - k, 10 - k] = [ 3, 3, 6, 8 ].
The difference between the largest and the smallest is 8 - 3 = 5.

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n == 1) return 0;

        sort(arr.begin(), arr.end()); // sort the array first

        int ans = arr[n - 1] - arr[0]; // initial difference

        int smallest = arr[0] + k;     // possible smallest height
        int largest = arr[n - 1] - k;  // possible largest height

        for (int i = 0; i < n - 1; i++) {
            int minVal = min(smallest, arr[i + 1] - k);
            int maxVal = max(largest, arr[i] + k);

            // skip if minVal becomes negative
            if (minVal < 0) continue;

            ans = min(ans, maxVal - minVal);
        }

        return ans;
    }
};
