#include<iostream>
#include <climits>
using namespace std;
int main(){
    // Smallest number in array 
    // Largest number in arrray
    int array[] = {1,33,44,2,5,4,-9};
    int size = 7;

    int smallestNo = INT_MAX;
    // assigned the smallest number withn largest value
    int largestNO = INT_MIN;
    for (int i = 0; i <= size; i++)
    // o (n)
    {
        // if array ki value smallest hai number se toh usko smallest ke equal kardo 
        // and the until smallest number loop will run 
        if(array[i] < smallestNo){
            smallestNo = array[i];
        }
        // We caan also do this in other way by min function 
        // int smallvalue = min(array[i], smallestNo); 
        if(array[i] > largestNO){
            largestNO = array[i];
        }
    }
    cout<<"smallest number in array"<<" "<<smallestNo<<endl;
    cout<<"Largest Number inn array is "<<" "<<largestNO<<endl;
    return 0;
}