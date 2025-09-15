930. Binary Subarrays With Sum

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum = sum + nums[j];
                if(sum == goal){
                    count++;
                }
                // simple o(n^2) Approach
            }
        }
        return count;
    }
};

// Optimized Approach
class Solution {
public:
    // helper function: count subarrays with sum <= goal
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        int l = 0, r = 0, sum = 0, count = 0;
        while(r < nums.size()){
            sum = sum + nums[r];
            r++;
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            count = count +  (r - l);  // all subarrays ending at r-1
            // count me all the r - l bhi add karloo
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
nums = [1,0,1,0,1], goal = 2

atMost(nums, 2) = counts all subarrays with sum ≤ 2.

atMost(nums, 1) = counts all subarrays with sum ≤ 1.

Subtract → you get only the count of subarrays whose sum = 2.

// so instead of that we need to find the sum <= goal 