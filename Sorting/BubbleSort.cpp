#include <iostream>
using namespace std;

int BubbleSort(int array[], int n){
    for(int i=0; i<n; i++){
        // for i = 0 to i = n-1 roundss
        // second loop is for the comparision
        for(int j=0; j<n-i; j++){
            // if the element at j is greater than the element at j+1 then swap them
            // j = 0 to n-i because last wala element exceed hojata tha
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