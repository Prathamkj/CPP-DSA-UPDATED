#include <iostream>
using namespace std;
int BinarytoDecimal(int binNum){
    int  ans = 0;
    int pow = 1;
    // here we use --> power and answer
    while(binNum > 0){
        int rem = binNum % 10;
        ans = ans + rem * pow;
        binNum /= 10;
        pow = pow * 2;
    }
    return ans;
}
int main(){
    int ans = BinarytoDecimal(10111);
    cout<<ans<<endl;
    return 0;
}
// Gfg Solution of the function
class Solution {
  public:
    int binaryToDecimal(string &b) {
        int result = 0;
        int power = 0;

        // Traverse from the rightmost bit to left
        for (int i = b.length() - 1; i >= 0; --i) {
            if (b[i] == '1') {
                result += (1 << power);  // 2^power
            }
            power++;
        }

        return result;
    }
};
