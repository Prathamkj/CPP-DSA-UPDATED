Amstrong Number 
#include <iostream>
using namespace std;
// Amstrong Number -- Digit ke har number ka cube ka sum is equal to the real number 
// 
int main() {
    int num, temp, sum = 0, digit;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;      // get last digit
        sum += digit * digit * digit;  // cube it
        temp = temp / 10;       // remove last digit
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}