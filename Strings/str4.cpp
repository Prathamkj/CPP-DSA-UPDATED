#include <bits/stdc++.h>
using namespace std;

// Permutation in String 
// permutation means different orders of the strig

//  in string eidbaooo
// ab is permutation of eidbaooo OF string 2

class Solution {
public:

    bool isFreqSame(int freq1[] , int freq2[]){
        for(int i=0;i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }


    bool checkInclusion(string s1, string s2) {
        // here humne character ko count ka array bana liya
        int freq[26] = {0};
        for(int i=0 ;i<s1.size(); i++){
            // to get the index value of any characterr
            int idx = s1[i] - 'a';
            // freq me store karke aage bada denge
            freq[idx]++;
        }

        // Now traversing the s2 string aand compare
        // window ka size s1 ke equal hi hoga
        int window = s1.size();
        for(int i=0; i<s2.size(); i++){
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};

            while(windIdx < window && idx< s2.size()){
                windFreq[s2[idx] - 'a']++;
                windIdx++; idx++;
            }
            if(isFreqSame(freq,windFreq)){
                return true;
            }
        }
        return false;
    }
};