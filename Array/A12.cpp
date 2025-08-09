1423. Maximum Points You Can Obtain from Cards

class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;
        // 1st loop till k-1 for the left sum
        for(int i=0 ;i<=k-1; i++){
            // 1st loop is for the left sum 
            // so here we gonna find the left sum
            lsum = lsum + card[i];
            // adding all the values of the left sum
            // max sum is also the left sum right now
            maxsum = lsum;
        }
        // for the shifting of the value
        // backward loop
        int right = card.size() - 1;
        for(int i=k-1; i>=0; i--){
            // here we gonna find the right sum here
            // that's why we run a backward loop here
            lsum = lsum - card[i];
            rsum = rsum + card[right];
            // update max sum after shifting
            maxsum = max(maxsum, lsum + rsum);
            right = right - 1;
        }
        return maxsum;
    }
};

// 
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftSum = 0;
        int rightSum = 0;

        // Step 1: Take all k cards from the left initially
        for(int i = 0; i < k; i++) {
            leftSum += cardPoints[i];
        }
        // updating the maxscore
        int maxScore = leftSum;

        // Step 2: Now shift one card from left to right at each step

        // for all combination not just for left sum
        for(int i = 1; i <= k; i++) {
            leftSum = leftSum - cardPoints[k - i];

            rightSum = rightSum + cardPoints[n - i]; 

            int total = leftSum + rightSum;
            maxScore = max(maxScore, total);    // update max
        }

        return maxScore;
    }
};
