860. Lemonade Change


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;

        for(auto pay : bills){
            if(pay == 5){
                five++;
                // counting the five 
            }
            else if(pay == 10){
                // if the five is equal to zero then the change will not happen 
                if(five == 0) return false;
                five--;
                ten++;
            }
            else{
                // if pay is equals to 20 
                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                }
                else if(five >= 3){
                    five = five - 3;
                }
                else{
                    return false;
                }

            }
        }
        return true;
    }
};