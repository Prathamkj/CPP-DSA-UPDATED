#include <iostream>
using namespace std;
// MergeSort 
// using Recursion
// just use divide and merge
// and before merging sort the arrays
void merge(int *arr, int s, int e) {

    int mid = (s+e)/2; 
    // taking the mid here
    int len1 = mid - s + 1;
    // first half array ki length
    int len2 = e - mid;
    // second half array ki length

    // yaha humne 2 alag alag array banayee
    int *first = new int[len1];
    int *second = new int[len2];
    // creating a 2 arrays first and second
    //and copy values
    // first half ki values ko first array mei copy karte hai
    int mainArrayIndex = s;
    // start se mid tak ki value copy karna start kar diyee
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
        // first half ki values ko first array mei copy karte hai
    }
    // second array mid+1 se start hota hai
    mainArrayIndex = mid+1;
    // for 2nd array and len2
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }
    // now we apply merge 2 sorted arrays
    //merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    // main array ka index starting se hai
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            // if first is less than 2nd then start wala part first array me dal do and increment kar do
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   
    // for each one remaining in either array
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // it is not mandatory though
    delete []first;
    delete []second;

}

void mergeSort(int *arr , int s , int e){
    // base case
    if(s>=e){
        // start end se aage hai to kuch nhi karna
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
        // print kar diya array ko
    } cout << endl;

    return 0;
}
