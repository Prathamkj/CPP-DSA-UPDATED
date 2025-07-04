#include <iostream>
using namespace std;

// MAXIMUM SUB ARRAY SUM

// Brute Force
int maxSubArraySum(int a[], int size) {
    int MaxSum = 0;
    for(int start = 0; start < size; start++){
        // for start
        int CurrentSum = 0;
        for(int end = start; end < size; end++){
            CurrentSum = CurrentSum + a[end];
            // start me end ki value add karo
            MaxSum = max(MaxSum,CurrentSum);
        }
    }
    return MaxSum;
}
// Optimal Approach
// Kandane's Approach
int Kandane(int arr[] , int size){
    // Here we use only 1 loop
    int CurrentSum = 0;
    int MaxSum = INT16_MIN;
    for(int i = 0; i < size; i++){
        // Here we add the current element to the current sum
        CurrentSum = CurrentSum + arr[i];
        MaxSum = max(MaxSum, CurrentSum);
        // Here if the current sum value is less than 0 
        // Means value is negative so we reset the current sum equal to 0
        // Because we want to find the maximum sum subarray
        if(CurrentSum < 0){
            // If current sum is negative then we reset the current sum
            CurrentSum = 0;
        }
    }
    return MaxSum;


}


int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    cout<<maxSubArraySum(arr , size)<<endl;
    cout<<Kandane(arr, size);
}