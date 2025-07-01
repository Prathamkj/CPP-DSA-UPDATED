496. Next Greater Element I 

// Brute Force Approach
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            int nextGreater = -1; // default if no greater element found
            // Find nums1[i] in nums2
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    // Check for next greater element after nums2[j]
                    for(int k = j + 1; k < nums2.size(); k++) {
                        // if nums2 is greater then greater element ko push kar diya
                        if(nums2[k] > nums2[j]) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break; // no need to continue once found
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};

#include <iostream>
// using namespace std;
// #include <stack>
// #include <vector>
// int main(){

//     vector<int> arr = {6,8,0,1,3};
//     stack<int> st;
//     vector<int> ans;
//     int n = arr.size();
//     for(int i = n -1; i>=0; i--){
//         while(!st.empty() && st.top() <= arr[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans.push_back(-1);
//         }else{
//             ans.push_back(st.top());
//         }
//         st.push(arr[i]);
//     }
//     for(int i = 0; i < n; i++){
//         cout << ans[i] << " ";

// USING UNORDERED MAP

