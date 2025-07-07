1004. Max Consecutive Ones III

// 1st Approach Brute force
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        for(int st = 0; st<nums.size(); st++){
            // for count
            int count = 0;
            for(int end = st; end<nums.size(); end++){
                if(nums[end] == 0){
                    count++;
                }
                if(count <= k){
                    maxlen = max(maxlen, end - st + 1);
                }
                else{
                    break;
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
