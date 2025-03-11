// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int getSecondLargest(vector<int> &arr) {
//         sort(arr.begin(),arr.end());
//         return arr[arr.size()- 2];
//     }
//     // here we just sort the array and print the secont largest value
// };
// // this code is for second Maximum element in the array

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int largest = arr[arr.size()-1];
        int secondlargest;
        for(int i = arr.size()-2; i>=0; i--){
            // i chalu ho rha hai index n-2 se
            if(arr[i] != largest){
                secondlargest = arr[i];
                break;
                // break isliye assing kare taki loop end ho jaye ek hi baar me
            }
        }
        return secondlargest;
    }
};