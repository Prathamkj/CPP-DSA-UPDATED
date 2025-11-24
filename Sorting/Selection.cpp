// SELECTION SORT
#include <iostream>
using namespace std;

void SelectionSort(int array[], int n){

    // minimum value ko swap karna hai array of values se

    for(int i=0; i<n-1; i++){
        int minIndex = i;

        // second loop i+1 se hi chalu hoga
        // and initially we assigned min value at index i
        // of 1st value
        // we start loop with i+1 because minimum index already i hai
        for(int j = i+1; j<n; j++){
            if(array[j] < array[minIndex]){
                // if mini index ki value hi badi hai the usko uske equal kar do
                minIndex = j;
            }
        }

        // Toh swap kardo
        swap(array[minIndex], array[i]);
    }
}

// 
int main(){
    int array[5] = {6, 2, 8, 4, 10};
    int n = 5;

    SelectionSort(array, n);

    // printing sorted array
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}
