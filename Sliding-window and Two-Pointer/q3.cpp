1004. Max Consecutive Ones III

// 1st Approach Brute force
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;

        for(int i = 0; i < n; i++){
            int zeros = 0; // reset zero count for each new i
            for(int j = i; j < n; j++){
                if(nums[j] == 0) zeros++;  // update instead of recounting

                if(zeros <= k){
                    maxlen = max(maxlen, j - i + 1);
                }
            }
        }
        return maxlen;
    }
};


// 2nd Approach Sliding Window
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // sliding window Approach
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int count = 0;
        // count for zeroes
        while(right < nums.size()){
            if(nums[right] == 0){
                count++;
            }
            // second while loop is for the comparasion
            while(count > k){
                // if count exceeds the k 
                if(nums[left] == 0){
                    count--;
                }
                left++;
            }
            maxlen = max(maxlen , right - left + 1);
            right++;
        }
        return maxlen;
    }
};
