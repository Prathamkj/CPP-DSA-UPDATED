80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int ans = 0;     // write index
        int count = 0;   // count of current number

        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                count = 1;   // new number
            } else {
                count++;    // same number
            }

            if (count <= 2) {
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};
