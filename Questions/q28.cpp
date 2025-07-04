// Longest Subarray with Sum K
// subarray, sum, brute force
// 1st Approach: Brute Force
// Time Complexity: O(n^3)
class Solution {
    public:
      int longestSubarray(vector<int>& arr, int k) {
          int n = arr.size();
          int len = 0;
  
          for (int st = 0; st < n; st++) {          // Start of the subarray
              for (int e = st; e < n; e++) {        // End of the subarray
                  int sum = 0;                      // Sum of the current subarray
                  for (int i = st; i <= e; i++) {   // Iterate through the subarray
                      sum += arr[i];
                  }
                  if (sum == k) {
                      len = max(len, e - st + 1);
                  }
              }
          }
          return len;
      }
  };