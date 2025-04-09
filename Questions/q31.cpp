1. Two Sum
    // 1st Approach: Brute Force
    // Time Complexity: O(n^2)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// 2nd Approach: - 2 Pointer Approach
// Time Complexity: O(nlogn)
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        // Create a vector of pairs to store number and its position
        vector<pair<int, int>> number_positions;
        for(int i = 0; i < size; i++) {
            number_positions.push_back({numbers[i], i});  // Add number-position pairs
        }
        
        // Sort based on numbers
        sort(number_positions.begin(), number_positions.end());
        
        int left = 0;
        int right = size - 1;
        int sum = 0;
        
        while(left < right) {
            sum = number_positions[left].first + number_positions[right].first;
            if(sum == target) {
                return {number_positions[left].second, number_positions[right].second};
            }
            else if(sum > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return {};
    }
};