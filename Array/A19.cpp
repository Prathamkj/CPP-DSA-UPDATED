Array Leaders

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        int max_from_right = arr[n-1];
        ans.push_back(max_from_right);  // rightmost element is always a leader
        
        // Traverse from second last to first element
        for(int i = n-2; i >= 0; i--) {
            if(arr[i] >= max_from_right) {  // include equal elements as leaders
                ans.push_back(arr[i]);
                max_from_right = arr[i];     // update max_from_right
            }
        }
        
        // Reverse the answer to maintain original order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
