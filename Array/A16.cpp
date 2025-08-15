Array Leaders

1st Approach
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        for(int i = 0; i < n; i++){
            bool isLeader = true;
            // Check if any element to the right is greater
            for(int j = i + 1; j < n; j++){
                // comparing the values of i and j 
                if(arr[j] > arr[i]){
                    isLeader = false;
                    // not a leader
                    break; // No need to check further
                }
            }
            
            if(isLeader){
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};

2nd Approach
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int maxi = INT_MIN;
        vector<int> ans;
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxi) { // include equal values
                ans.push_back(arr[i]);
                // after each inserting of element we will set maxi = arr[i]
                // so maxi will always hold the maximum value to the right
                maxi = arr[i];
            }
        }

        reverse(ans.begin(), ans.end()); // restore original order
        // we can also do sort
        // sort
        return ans;
    }
};
