1423. Maximum Points You Can Obtain from Cards

class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;
        // 1st loop till k-1 for the left sum
        for(int i=0 ;i<=k-1; i++){
            lsum = lsum + card[i];
            // adding all the values of the left sum
            // max sum is also the left sum right now
            maxsum = lsum;
        }
        // for the shifting of the value
        // backward loop
        int right = card.size() - 1;
        for(int i=k-1; i>=0; i--){
            // This particular loop is for the taking out the left sum elements and
            // pushing right sum elements one by one from last of the index
            lsum = lsum - card[i];
            rsum = rsum + card[right];
            // update max sum after shifting
            maxsum = max(maxsum, lsum + rsum);
            right = right - 1;
        }
        return maxsum;
    }
};
