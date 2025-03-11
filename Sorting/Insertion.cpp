// INSERTION SORT
#include <iostream>
using namespace std;

void InsertionSort(int array[], int n){
    for(int i = 1; i < n; i++){
        int current = array[i];
        // this is current element 
        // First element of the array
        int previous = i-1;
        // This while loop willl run backwards
        while(previous >= 0 && array[previous] > current){
            array[previous + 1] = array[previous];
            previous = previous - 1;
        }
        array[previous + 1] = current;

    }
}
int PrintArray(int array[], int n){
    for(int i = 0; i <n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n =5;
    int array[]={4,1,5,2,3};
    InsertionSort(array, n);
    PrintArray(array,n);
    return 0;
}