Input: arr[] = [5, 6, 7, 8]
Output: [5, 6, 7, 9]
Explanation: 5678 + 1 = 5679


class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        int n = arr.size();
        int carry = 1; // since we are adding 1

        for (int i = n - 1; i >= 0; i--) {
            int sum = arr[i] + carry;
            arr[i] = sum % 10;     // store the last digit
            carry = sum / 10;      // update carry
        }

        if (carry) {
            arr.insert(arr.begin(), carry); // handle overflow, e.g., 999 + 1 → 1000
        }

        return arr;
    }
};
