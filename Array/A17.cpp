// Left Rotate
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;   // handle k > n

        // Step 1: reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 2: reverse remaining elements
        reverse(nums.begin() + k, nums.end());

        // Step 3: reverse whole array
        reverse(nums.begin(), nums.end());
    }
};

arr = [1, 2, 3, 4, 5], d = 2

Step 1: Reverse first d=2 → [2,1,3,4,5]

Step 2: Reverse rest → [2,1,5,4,3]

Step 3: Reverse whole → [3,4,5,1,2]

This is for Rotate the array to the left by d elements.


// For Rotate the array to the right by d elements.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;   // important

        // Step 1: reverse entire array
        reverse(nums.begin(), nums.end());

        // Step 2: reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i=0; i<n; i++){
            temp[(i+k) % nums.size()] = nums[i];
            // (i+k) % n 
            // for this we need to remember this formula for the final answer 
            // Now for left rotate -- 
            // temp[(i - k + n) % n] = nums[i];
        }
        nums = temp;
    }
};