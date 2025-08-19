#include <iostream>
using namespace std;

int BubbleSort(int array[], int n){
    for(int i=0; i<n; i++){
        // for i = 0 to i = n-1 roundss
        // second loop is for the comparision
        for(int j=0; j<n-i; j++){
            // if the element at j is greater than the element at j+1 then swap them
            // j = 0 to n-i because last wala element exceed hojata tha
            // here last element ek ek karke store hote jaa rhe hai toh we will
            // j < n-i -- so 
            if(array[j]>array[j+1]){
                // swap the elements
                swap(array[j],array[j+1]);
            }

        }

    }
}

int main(){
    int array[6]={10,1,7,6,14,9};
    int n = 6;
    BubbleSort(array,n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " << endl;
    }
    cout << endl;
    return 0;
}

// java code

class Solution {
    public void bubbleSort(int[] arr) {
        int n = arr.length;
        
        for (int i = 0; i < n - 1; i++) {
            boolean swapped = false; // optimization
            
            // compare adjacent elements
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            
            // if no swap happened, array is already sorted
            if (!swapped) break;
        }
    }
}
