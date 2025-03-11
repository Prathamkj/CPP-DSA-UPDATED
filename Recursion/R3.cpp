#include <iostream>
using namespace std;

// isSorted or not
bool isSorted(int arr[], int size)
{
    // pahale check karenge base condition
    // if array single size me hai toh it is always sorted
    if (size == 1 || size == 0)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
        // here first element is sorted technicaly
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

// Sum of numbers in array
int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    // If the array size (size) is 0, it returns 0 because there's nothing to sum.
    // If the size is 1, it directly returns the only element in the array, arr[0].
    // for the remaining element
    int remaining = sum(arr + 1, size - 1);
    // first and remaining elements ko sum karenge
    int sum = arr[0] + remaining;
    return sum;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
    int ans1 = sum(arr, size);
    cout << "Sum of The Array is " << ans1 << endl;
}