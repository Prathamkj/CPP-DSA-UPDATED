3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        unordered_set<char> st;
        // here we have taken a set to contain all the unique values
        while(right < s.size()){
            // checking if the element does not exist then we will push right
            if(st.find(s[right]) == st.end()){
                // we will kept pushing the right elemetn in the set
                // because we are incrementing the right value
                st.insert(s[right]);
                // jaise jaise we are pusing the elements we are getting the maxlen 
                // by the  help of right and left
                maxlen = max(maxlen , right - left + 1);
                // right - left + 1 -- formula for maxlen
                // incrementing the right
                right++;
            }
            // if the element is already exist then 
            //  we will erase the shift the left element 
            else{
                st.erase(s[left]);
                // erasing the elements from the left
                // and increment the left 
                left++;
            }
        }
        return maxlen;
    }
};


// Java
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        HashSet<Character> set = new HashSet<>();
        // created a hashset here
        while(right < s.length()){
            if(!set.contains(s.charAt(right))){
                // if it not contains then increment the right
                set.add(s.charAt(right));
                maxlen = Math.max(maxlen , right - left + 1);
                right++;
            }
            else{
                set.remove(s.charAt(left));
                left++;
            }
        }
        return maxlen;
    }
}