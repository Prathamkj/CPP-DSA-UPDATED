#include <iostream>
using namespace std;
// Pivot Element in Array
// Maximum Element is Array
//By Binary Search Method
int PivotElement(int array[], int size)
{
    int start = 1;
    int end = size - 2;
    // end = size - 2 because last element cannot be a peak element
    // similarly first element cannot be a peak element
    int middle = (start + end) / 2;
    while(start <= end) {
        if(array[middle - 1]<array[middle] && array[middle]>array[middle + 1]){
            // aise likhte hai
            return array[middle];
        }
        else if(array[middle] > array[middle -1]){
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
       middle = (start + end) / 2;
    }
    return -1;

}
// Code for Peak Element in Array
int main()
{
    int array[6] = {0, 3, 8, 9, 5, 2};
    cout << PivotElement(array, 6);
}