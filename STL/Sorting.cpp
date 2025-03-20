#include<iostream>
using namespace std;
int main(){
    // sort functions for sorting
    int arr[4] ={4,3,2,1};
    sort(arr.begin(), arr.end());
    sort(arr,arr + n);
    // n=4

    sort(vec.begin(), vec.end());
    // for vector sorting

    // FOR DESCENDING ORDEER SORTING
    sort(arr.begin(), arr.end(), greater<int>());
    // or
    sort(arr,arr + n,greater<int>());
                    // this is comparator function
    return 0;
}