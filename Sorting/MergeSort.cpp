#include <iostream>
using namespace std;
// MergeSort 
// using Recursion
void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    // yaha humne 2 alag alag array banayee
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    // first half ki values ko first array mei copy karte hai
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }
    // second array mid+1 se start hota hai
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    // main array ka index starting se hai
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr , int s , int e){
    // base case
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    // left part sort karna hai
    // left part start se mid tak rahega
    mergeSort(arr,s,mid);
    // right part sort karna hai
    mergeSort(arr,mid+1,e);

    // then merge 
    merge(arr,s,e);
}


int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
