// Two sum using unordered_map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // number -> index
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i]; // typo corrected (arr -> nums)
            int sec = target - first;
            // second element ko ab hum search karenge map mee
            if(mp.find(sec) != mp.end()){
                // if second element mil gya toh hum 
                // return kardenge usse
                return {mp[sec], i};
            }
            // agar second nahi mila toh abhi ka element map mee store karenge
            mp[first] = i;
        }

        return {};
    }
};

// 2nd Wayy
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // number -> index
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i]; // typo corrected (arr -> nums)
            int sec = target - first;
            // second element ko ab hum search karenge map mee
            if(mp.find(sec) != mp.end()){
               ans.push_back(i);
               ans.push_back(mp[sec]);
               break;
            }
            mp[first] = i;
        }

        return ans;
    }
};
