Coin Change (Minimum Coins)

Input: coins[] = [25, 10, 5], sum = 30
Output: 2
Explanation: Minimum 2 coins needed, 25 and 5  

class Solution {
public:
    int minCoins(vector<int> &coins, int sum) {
        sort(coins.begin(), coins.end(), greater<int>()); // descending sort
        int count = 0;

        for(int i = 0; i < coins.size(); i++){
            while(sum >= coins[i]){
                sum = sum - coins[i];
                count++;
            }
            if(sum == 0) break;
        }

        if (sum == 0) {
            return count;
        } else {
            return -1;
        }
    }
};
