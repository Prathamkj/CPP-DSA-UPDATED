#include <iostream>
using namespace std;
// MAXIMUM - SUBARRAY - SUM
int PrintSubArray(int arr[], int n){
    for(int start=0; start<n; start++){
        // : Determines the starting index of the subarray.
        // sare sub arrrays ka start
        for(int end=start; end<n ; end++){
            // sare sub arrays ka end
            for (int i=start; i<=end; i++){
                // sare sub arrays ka sum
                cout<< arr[i];
            }
            cout<<" ";

        }
    }
}
// This code is for printingg all the subarrays
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    cout<<PrintSubArray(arr , n);
}

Example of Subarray tha how it is printing
arr = {1, 2, 3}
Step-by-step output:
Start = 0, End = 0 → print 1

Start = 0, End = 1 → print 1 2

Start = 0, End = 2 → print 1 2 3

Start = 1, End = 1 → print 2

Start = 1, End = 2 → print 2 3

Start = 2, End = 2 → print 3

