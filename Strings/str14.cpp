First Occurenc

class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int n = txt.size();
        int m = pat.size();
        for(int i=0; i<=n-m; i++){
            // n - m because we need to check for the min of the 
            // string from input
            if(txt.substr(i , m) == pat){
                return i;
            }
        }
        return -1;
    }
};