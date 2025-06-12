// 541. Reverse String II

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i = i + 2 * k) {
            // after each iteration it will jump to the next 2k Block
            // i is the starting index of the current 2k block
            int left = i;
            int right = min(i + k - 1, (int)s.size() - 1);

            // Reverse the first k characters in this 2k block
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};