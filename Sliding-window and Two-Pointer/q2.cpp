3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        unordered_set<char> st;
        while(right < s.size()){
            // checking if the element does not exist then we will push right
            if(st.find(s[right]) == st.end()){
                // we will kept pushing the right elemetn in the set
                // because we are incrementing the right value
                st.insert(s[right]);
                maxlen = max(maxlen , right - left + 1);
                // incrementing the right
                right++;

            }
            // if the element is already exist then 
            //  we will erase the shift the left element 
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return maxlen;
    }
};
