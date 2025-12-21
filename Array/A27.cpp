55. Jump Game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0;
        for(int i=0; i<n; i++){
            // here if i is grater then jump - that's mean jump is not hppened 
            // 
            if(jump < i) {

                return false;
            }
            jump = max(jump , i + nums[i]);
        }
        return true;
    }
};

45. Jump Game II

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        int jumps = 0;      // number of jumps taken
        int currEnd = 0;    // end of current jump range
        int farthest = 0;   // farthest index reachable

        for (int i = 0; i < n - 1; i++) {
            // n-1 tak chala rhe hai taki last element tak hi loop chale yaha
            farthest = max(farthest, i + nums[i]);
            // the farthest we can reach here first 

            // when we reach the end of current range
            if (i == currEnd) {
                // so we have to jump in these conditions
                jumps++;
                currEnd = farthest;
                // update the current end 
            }
        }
        return jumps;
    }
};
