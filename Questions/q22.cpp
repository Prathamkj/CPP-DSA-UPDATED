#include <iostream>
using namespace std;
// SEARCH IN A ROTATED SORTED ARRAY
// By Binary Search Method
int RotatedArray(int array[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int middle = (start + end) / 2;
    while (start <= end)
    {
        if (array[middle] == target)
        {
            return middle;
        }
        // for the left part of the sorted array
        if(array[start] <= array[middle]){
            if (array[start] <= target && target <= array[middle]){
                end = middle - 1;
            }
            else{
                start = middle + 1;
            }
        } // for the right part of the sorted array
        else{
            if(array[end]>=target && array[middle]>=target){ 
                start = middle + 1;
            }   
            else{
                end = middle - 1;
            }
        }
        middle = (start + end) / 2;
    }

    return -1;
}
// Code for Rotated sorted Array for 0 value
int main()
{
    int array[8] = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << RotatedArray(array, 8, target);
}