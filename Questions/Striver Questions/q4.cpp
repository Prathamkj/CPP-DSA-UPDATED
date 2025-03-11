// MISSING ELEMENT IN THE ARRAY
#include <bits/stdc++.h>
using namespace std;
// optimal approach 1
int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

// Optimal Approachh 2
// By using XOR operator
int NumberMissing(vector<int>&a, int N){
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i <= N ; i++) {
        // first loop is for the xor of all the elements till
        xor1 = xor1 ^ i;
    }
    // 2nd loop id form n-1 elements it is for the array 
    for(int i = 0; i < N-1 ; i++) {
        xor2 = xor2 ^ a[i];
    }
    int missingElement = xor1 ^ xor2;
    return missingElement;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is:- " << ans << endl;
    int ans2 = NumberMissing(a , N);
    cout<<"The Missing Number with another method is:- " << ans2 << endl;
    return 0;
}
