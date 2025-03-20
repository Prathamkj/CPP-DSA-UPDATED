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

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    cout<<PrintSubArray(arr , n);
}