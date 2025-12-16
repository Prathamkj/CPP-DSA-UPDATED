#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// sum of elements in array
int sumNo(int n, int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// sum of numbers from 1 to n+1
int sumI(int n) {
    int sum = 0;
    for (int i = 1; i <= n + 1; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = sumNo(n, arr);   // sum of given numbers
    int sumT = sumI(n);        // expected total sum

    int missing = sumT - sum;
    cout << missing;

    return 0;
}
