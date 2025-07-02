
Previous Smaller Element

class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        vector<int> ans; // answer for storing the final array
        stack<int> st;   // stack to keep track of previous elements

        for(int i = 0; i < arr.size(); i++) {
            // Jab tak stack ka top current se bada ya barabar ho, usse hata do
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop(); // pop kar denge
            }

            if(st.empty()) {
                ans.push_back(-1); // koi chhota element nahi mila
                // toh we push -1 on our vector answer....
            } else {
                ans.push_back(st.top()); // top hi nearest smaller hoga
            }

            st.push(arr[i]); // current element ko stack mein daal do
        }

        return ans;
    }
};
