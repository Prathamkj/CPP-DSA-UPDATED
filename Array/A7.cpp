// Find duplicate number 287 leet code

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int val : nums){
            // for each loop
            if(s.find(val) != s.end()){
                // s ke andar value ko dhund liya hai toh
                return val;
            }
            s.insert(val);
        }
        return -1;
    }
};