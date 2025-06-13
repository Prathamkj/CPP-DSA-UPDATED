Longest Common Prefix of Strings


class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        if(arr.empty()){
            return "";
        }
        sort(arr.begin(), arr.end());

        string ans = "";
        string st = arr[0];
        string end = arr[arr.size() - 1];

        for(int i = 0; i < min(st.size(), end.size()); i++) {
            if(st[i] != end[i]) {
                break;
            }
            ans += st[i];
        }
        return ans;
    }
};
