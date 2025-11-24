// INSERTION SORT
#include <iostream>
using namespace std;
/*
    Here we will start from the second element and compare with the previous value 
    and shift it
    -- Here we will do the shifting not the swapping

*/

void InsertionSort(int array[], int n){
    for(int i = 1; i < n; i++){
        int current = array[i];
        // this is current element 
        // First element of the array
        int previous = i-1;
        // This while loop willl run backwards
        while(previous >= 0 && array[previous] > current){
            // previous value agar current se badi hai toh 
            // previous ko shift kardo aage and waha current ko le aao
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



///  Raw Code
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1; i<n; i++){
            // lets take a current element
            int curr = arr[i];
            int j = i - 1;
            // current ke pahale wala element
            while(j >=0 && arr[j] > curr){
                arr[j+1] = arr[j];
                j--;
                // j ko decrement kar diyaa
            }
            // after that j+1 me current element dal diyaa
            arr[j+1] = curr;
        }
    }
};

/// Java code
class Solution {
    // Please change the array in-place
    public void insertionSort(int arr[]) {
        // code here
        int n = arr.length;
        for(int i=1; i<n; i++){
            int curr = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > curr){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = curr;
        }
    }
}