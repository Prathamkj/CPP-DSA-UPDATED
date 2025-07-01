503. Next Greater Element II
// Brute Force Approach
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int next = -1;
            // Check next n-1 elements circularly
            for (int j = 1; j < n; j++) {
                if (nums[(i + j) % n] > nums[i]) {
                    // Logic for the circular array
                    // (i + j) % n gives the index in a circular manner
                    next = nums[(i + j) % n];
                    break;
                }
            }
            ans.push_back(next);
        }
        return ans;
    }
};
