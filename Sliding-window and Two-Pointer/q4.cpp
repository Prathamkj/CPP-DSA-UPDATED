904. Fruit Into Baskets
// Brute force
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //
        int maxlen = 0;
        for(int st = 0; st<fruits.size(); st++){

            // set
            set<int> s;
            for(int end = st; end < fruits.size(); end++){
                s.insert(fruits[end]);
                if(s.size() <= 2){
                    maxlen = max(maxlen , end - st + 1);
                }
                else{
                    break;
                }
            }
        }
        return maxlen;
    }
};

// Sliding Window
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        // created a basket to count out the freq of the elements 
        // for unique 
        int left = 0, maxLen = 0;
        for (int right = 0; right < fruits.size(); ++right) {
            basket[fruits[right]]++;
            // pushing all the values into the Map

            while (basket.size() > 2) {
                // if the size of basket increases by 2 then 
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    // decrement freq karne ke baad if it is equal to zero then
                    // erase that particular value from the basket 
                    // so we will have a new basket and 
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};