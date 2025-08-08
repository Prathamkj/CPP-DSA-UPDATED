4 Sum
// Brute force Approach
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // 1st method is take 4 of the variables to store each 
        // sum
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k= j+1; k<nums.size(); k++){
                    for(int l = k+1; l<nums.size(); l++){
                        // 4 loops
                        if(nums[i] + nums[j] + nums[k] + nums[l] == target){
                            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                            sort(temp.begin(),  temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        for(auto val : st){
            ans.push_back(val);
        }
        return ans;
    }
};

// Better Approach
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<int> hashset;
                for (int k = j + 1; k < n; k++) {
                    long long sum = 1LL * nums[i] + nums[j] + nums[k];
                    int fourth = target - sum;
                    
                    if (hashset.find(fourth) != hashset.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// Optimal solution
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {
                // Skip duplicates for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = 1LL * nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;

                        // Skip duplicates for left and right
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
