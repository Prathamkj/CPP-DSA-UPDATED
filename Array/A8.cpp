Chocolate Distribution Problem
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // Step 1: Sort the array
        sort(a.begin(), a.end());

        // Step 2: Initialize minimum difference
        int min_diff = INT_MAX;

        // Step 3: Slide the window of size m
        for(int i = 0; i + m - 1 < a.size(); i++) {
            int diff = a[i + m - 1] - a[i];
            // finally storing the minimum distance in final
            min_diff = min(min_diff, diff);
        }

        return min_diff;
    }
};
