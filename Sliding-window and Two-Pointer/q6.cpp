1248. Count Number of Nice Subarrays

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        // check every subarray
        for (int i = 0; i < n; i++) {
            int oddCount = 0; // reset for each starting index

            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 1) {
                    oddCount++; // count odd numbers
                }
                if (oddCount == k) {
                    count++; // found a nice subarray
                }
                else if (oddCount > k) {
                    break; // no need to continue, already > k
                }
            }
        }
        return count;
    }
};

// Optimized Approach Sliding Window
