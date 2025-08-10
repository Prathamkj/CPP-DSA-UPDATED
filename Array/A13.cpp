UNION OF 2 SORTED ARRAY
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j]) {
                if (ans.empty() || ans.back() != b[j])
                    ans.push_back(b[j]);
                j++;
            }
            else { // both equal
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        // Remaining elements in a
        while (i < n) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        
        // Remaining elements in b
        while (j < m) {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }
};
