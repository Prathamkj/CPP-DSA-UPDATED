#include <iostream>
using namespace std;
// Maximum Element in Array
// Peak Elemet in the Array
// By linear search Method
int LinearSearch(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i - 1] || i == 0)
        {
            // if in i==0 array i bada hoga hi array of i-1
            if (array[i + 1] < array[i] || i == size - 1)
            {
                // Here array of i bada hoga hi i+1 array
                return i;
            }
        }
    }
}

int main()
{
    int linear[10] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int Binary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int size = 10;
    int memory = 10;
    cout << "Linear Search Answer is " << LinearSearch(linear, size) << endl;
}

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        
        // Check each element one by one
        for(int i = 0; i < n; i++) {
            // If it's the first element or greater than the previous
            // AND it's the last element or greater than the next
            if ((i == 0 || arr[i] >= arr[i - 1]) &&
                (i == n - 1 || arr[i] >= arr[i + 1])) {
            // The conditions i == 0 and i == n - 1 are there to handle the 
            //boundary elements (the first and last elements) safely — because they don’t have both neighbors. 
                
                return i;  // found peak, return index
                // return i -- so it will return true iventually
            }
        }
        
        return -1; // in case no peak found (should not happen for valid input)
    }
};
