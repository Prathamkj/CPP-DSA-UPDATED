#include <iostream>
using namespace std;
// NUMBER OF ONE BITS
int NumberBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        // jab tak no. zero nhi ban jata tab tak check karenge
        if (n & 1)
        {
            // because 1 se and karne pe 1 hi aayegaa 
            // and then right shift kardenge 
            count++;
        }
        n = n >> 1;
        // ye right shift hota hai....
        // right shift n ki value ko hatane ke liye kiya hai
        // right shift kiya
    }
    return count;
}
// isme humne 1 bit ko check karne ke liye n&1 likha hai
//

int main()
{
    cout << NumberBits(00000010001011);

    return 0;
}
// 2nd method
class Solution {
public:
int hammingWeight(int n) {
    int count = 0;
    while(n != 0){
        count = count + n % 2;
        n = n / 2;
    }
    return count;
}
};