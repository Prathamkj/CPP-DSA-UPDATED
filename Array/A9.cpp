11. Container With Most Water

Better Solution
// Time Complexity: O(n^2)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                int width = j - i;
                int h = min(height[i], height[j]);  // use different name
                int area = h * width;
                ans = max(ans, area);
            }
        }
        return ans;
    }
};
// Optimized Solution
// Time Complexity: O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        // using 2 pointer Approach to solve this problem
        int i = 0, j = height.size() - 1;
        int ans = 0;

        while(i < j) {
            int width = j - i;
            int h = min(height[i], height[j]);
            int area = width * h;

            // finally returning the maximum area found between the two pointers 
            ans = max(ans, area);

            // Move the pointer pointing to the smaller height
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return ans;
    }
};


