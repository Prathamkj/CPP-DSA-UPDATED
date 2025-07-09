#include <iostream>
#include <vector>
using namespace std;

void breakDigits(int n, vector<int>& ans) {
    if (n == 0) return;
    breakDigits(n / 10, ans);
    ans.push_back(n % 10);
}

void sayDigits(vector<int>& digits, string arr[]) {
    for (int i = 0; i < digits.size(); i++) {
        cout << arr[digits[i] - 1] << " ";
    }
    cout << endl;
}

int main(void) {
    int n;
    cin >> n;

    // Edge case: handle zero explicitly
    if (n == 0) {
        cout << "zero" << endl;
        return 0;
    }

    vector<int> digits;
    breakDigits(n, digits);

    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    sayDigits(digits, arr);

    return 0;
}
