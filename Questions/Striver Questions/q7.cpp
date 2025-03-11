// MAJORITY ELEMENT
#include<iostream>
#include <algorithm>
using namespace std;

int MajorElement(int arr[], int n) {
    sort(arr, arr + n);
    // sorting the array 
    int ans = arr[0];
    // first element of array
    int freq = 1;
    // frequency
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]) {
            freq++;
        }
        else{
            // reset the frequency
            freq = 1;
            ans = arr[i];
            // and answer bhi new ho jayega
        }
        if (freq > n/2)
        {
            return ans;
        }
    }
    return ans;
}

// Optimal Approach
int OptimumMajority(){

    

}
// FIRST METHOD BY CALCULATING FREQUENCY
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int count = 0;
//             for(int j=0;j<n;j++){
//             if(nums[i] == nums[j] ){
//                 count++;
//                 }
//             }
//             if(count > n/2){
//                 return nums[i];
//             }
//         }
//         return -1;

//     }
// };
int main(){
    int arr[7] = {1,2,2,1,1,2,2};
    int n = 7;
    cout<<MajorElement(arr,n)<<endl;
    cout<<" Optimal solution is "<<OptimumMajority(arr,n)<<endl;
}