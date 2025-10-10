Input: arr[] = [2, 2]
Output: [2, 1]
Explanation: Repeating number is 2 and the missing number is 1.

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        
        // frequency array to count occurrences
        vector<int> freq(n + 1, 0); 
        // initially putting all the values is 0 
        int repeating = -1, missing = -1;
        
        // count frequency of each element
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        // identify repeating and missing elements
        for (int i = 1; i <= n; i++) {
            // if the freq is zero then it is missing value 
            // else if the frequency exeeds to 1 then it is repeating 
            // value 
            if (freq[i] == 0) missing = i;
            else if (freq[i] == 2) repeating = i;
        }
        
        return {repeating, missing};
    }
};
