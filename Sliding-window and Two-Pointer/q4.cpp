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
