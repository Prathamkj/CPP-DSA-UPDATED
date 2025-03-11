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
            count++;
        }
        n = n >> 1;
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