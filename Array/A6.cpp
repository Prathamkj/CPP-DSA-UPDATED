// 2 sum problem
#include <unordered_map>
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Declare an unordered map to store the numbers and their indices
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0 ;i<nums.size();i++){
            int first = nums[i];
            int sec = target - first;

            if(m.find(sec) != m.end()){
                // to find the second value
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};
