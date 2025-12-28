49. Group Anagrams
/*

This map stores:

Key → sorted version of word

Value → list of original words with that key

Example:

"aet" → ["eat","tea","ate"]
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            // sorting the string
            // pushing string values to the map
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &it : mp) {
            ans.push_back(it.second);
            // push the values into the map
        }
        return ans;
    }
};
