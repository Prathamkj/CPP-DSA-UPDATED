#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int prior(int arr[], int n){
    int count = 1;          // first element is always counted
    int greatest = arr[0];  // store greatest so far

    for(int i = 1; i < n; i++){
        // here we start with the 1st index 
        if(arr[i] > greatest){
            count++;
            greatest = arr[i];
        }
    }
    return count;
}
// 7 4 8 2 9
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << prior(arr, n) << endl;
    return 0;
}
