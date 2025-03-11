#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int target)
{

    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    if (arr[0] == target)
    {
        return true;
    }
    // isme first wale element ko check kiya
    else
    {
        // isme remaining wale elemets ko check kiya
        bool remaining = LinearSearch(arr + 1, size - 1, target);
        if (remaining == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
// Binary Search In Recursion
bool BinarySearch(int arr[], int size, int target , int s , int e){
    // so here we know that array should be sorted in ascendind
    // so start cannot grater than end
    if(s>e){
        return -1;
    }
    int mid = (s + e)/2;
    if(arr[mid] == target){
        return true;
    }
    if(arr[mid] > target){
        return BinarySearch(arr , size , target , s , mid -1);
    }
    else{
        return BinarySearch(arr , size , target , mid + 1 , e);
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int target = 20;
    bool ans = LinearSearch(arr, size, target);
    cout << ans << endl;
    int s = 0;
    int e = size -1;
    bool ans1 = BinarySearch(arr, size, target , s,e);
    cout<< ans1 << endl;
}