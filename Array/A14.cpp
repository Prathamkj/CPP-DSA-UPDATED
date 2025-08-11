169. Majority Element


1st Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
            // stored all the frequency of elements
            // onto the map here
        }
        n = n/2;
        for(auto x: mp){
            // traverse through the map
            if(x.second > n){
                // if map .second means frequency of that element is grater then n 
                // then we return the x.first means -- the value of that particular index
                // found the majority element
                return x.first;
            }
        }
        return 0;
    }
};

2nd Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // sort kar diya array ko first then nikal liya 
        // and after that returns tthe n/2 element
        int n = nums.size();
        // so that we know the majority elemennt will always be lying on the 
        // mid - because it is majority 
        return nums[n/2];
    }
};

3rd Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 1;
            // count the frequency of the current element
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            // if counnt > n/2 then we return the nums[i]
            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};
