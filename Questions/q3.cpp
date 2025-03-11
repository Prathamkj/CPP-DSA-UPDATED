#include <iostream>
using namespace std;
#include <climits>
// REVERSE AN INTEGER

int reverse(int x)
{
    int answer = 0;
    int Max = INT_MAX;
    int Min = INT_MIN;
    while (x != 0)
    {
        int remainder = x % 10;
        if((answer>Max/10)||(answer<Min/10)){
            return 0;
        }
        answer = (answer * 10) + remainder;
        // Formula for the answer of the reverse of a number
        x = x / 10;
    }

    return answer;
}
int main()
{
    cout << reverse(54321);
}