// 0 1
// Decimal to Binary
// for this we have to divide a number by 2 and write all it's remainder in backwards
/* here remainder ko 10 ki power se multiply karna hai and add karna hai */
#include <iostream>
using namespace std;
int decToBinary(int decNum)
{
    int ans = 0;
    // ans = binary number initialize  with 0
    
    int power = 1;
    // this power = 1 is 10 power 0 for initiall
    while (decNum > 0)
    {
        int remainder = decNum % 2;
        // for remainder
        decNum = decNum / 2;
        // now for quoitent
        ans = ans + (remainder * power);
        power = power * 10;
    }
    return ans;
}

int main()
{
    int decNum = 55;
    cout << decToBinary(decNum) << endl;
    return 0;
}