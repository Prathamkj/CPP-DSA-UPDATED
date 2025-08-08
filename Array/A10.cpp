3 SUM 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){

                for(int k=j+1; k<nums.size(); k++){
                    // checking if the sum is equal
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        // storing all the values into the vector
                        sort(triplet.begin(), triplet.end());
                        st.insert(triplet);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;

    }
};
// Syntatically different solution but same
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;                    // To store unique sorted triplets
        vector<vector<int>> ans;                // Final result

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                for(int k = j + 1; k < nums.size(); k++) {
                    // If the sum of the triplet is 0
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplet;
                        triplet.push_back(nums[i]);
                        triplet.push_back(nums[j]);
                        triplet.push_back(nums[k]);

                        sort(triplet.begin(), triplet.end()); // Sort to avoid duplicates
                        st.insert(triplet);                   // Insert into set
                    }
                }
            }
        }

        for(auto value : st) {
            ans.push_back(value);  // Convert set to vector
        }

        return ans;  // ✅ Missing in your version
    }
};


Better Approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;  // to avoid duplicate triplets
        vector<vector<int>> ans;  // final answer

        for(int i = 0; i < nums.size(); i++) {
            set<int> hashset;  // to store values seen so far for current i
            for(int j = i + 1; j < nums.size(); j++) {
                int third = -(nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()) {
                    // if the third value is found in hashset then we will create a triplet
                    // and insert it into the set to avoid duplicates
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);  // insert sorted triplet to avoid duplicates
                }
                // storing all the set values onto the hashset 
                hashset.insert(nums[j]);
            }
        }

        for(auto val : st) {
            ans.push_back(val);
        }

        return ans;
    }
};


Optimal Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        // sorting first the entire array
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    // equal
                    vector<int> temp = {nums[i] , nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};