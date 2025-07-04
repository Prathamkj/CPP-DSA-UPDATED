167. Two Sum II - Input Array Is Sorted

// Using 2 pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                return {left + 1, right + 1}; // 1-based indexing
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return {}; // no solution (not expected since guaranteed one solution)
    }
};

// Using Hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int, int> mp; // number -> index
        for(int i = 0; i < num.size(); i++) {
            int first = num[i];
            int sec = target - first;
            if(mp.find(sec) != mp.end()) {
                return {mp[sec] + 1, i+1}; // return previous index and current index
            }
            mp[first] = i; // store number and its index
        }
        return {};
    }
};
