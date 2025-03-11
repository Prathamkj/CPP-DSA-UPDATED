1047. Remove All Adjacent Duplicates In String
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i=0 ;i< s.size() ; i++){
            // element is equal to string toh pop karenge
            if(ans.size() > 0 && ans.back() == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
