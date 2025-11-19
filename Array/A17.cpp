class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // handle if d > n

        // Step 1: reverse first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: reverse remaining n-d elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};
arr = [1, 2, 3, 4, 5], d = 2

Step 1: Reverse first d=2 → [2,1,3,4,5]

Step 2: Reverse rest → [2,1,5,4,3]

Step 3: Reverse whole → [3,4,5,1,2]

This is for Rotate the array to the left by d elements.


// For Rotate the array to the right by d elements.
void rotateRight(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // handle d > n
    // by this we will get the d value here
    if (d == 0) return;

    // Step 1: Reverse last n-d elements → arr.begin()+d to arr.end()
    reverse(arr.begin() + d, arr.end());

    // Step 2: Reverse first d elements → arr.begin() to arr.begin()+d
    reverse(arr.begin(), arr.begin() + d);

    // Step 3: Reverse whole array → arr.begin() to arr.end()
    reverse(arr.begin(), arr.end());
}