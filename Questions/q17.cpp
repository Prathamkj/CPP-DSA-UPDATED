#include <iostream>
using namespace std;
// BINARY SEARCH
// IN BINARY SEARCH ARRAY SHOULD BE SORTEDD
int BinarySearch(int array[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int middle = (start + end) / 2;
    // agar target variable equal hai array ke the usko return kardo

    while (start <= end)
    {
        if (target == array[middle])
        {
            return middle;
            // if target middle ke equal hai toh return middle
        }
        // if key value mid se badi hai toh right me chale jaoo
        if (target > array[middle])
        {
            start = middle + 1;
            // STARTING MIDDLE ELEMENT + 1 SE KARENGE
            // start me 0 ki gajah middle + 1 ki value dal jayegi
            // and end me middle - 1 ki value dal jayegi
        }
        // isse start and mid ki value update ho jayegi
        else if(target < array[middle])
        {
            // left part me chale gyee
            end = middle - 1;
        }
        else{
            cout<<"No value Exist";
        }
        // middle bhi update kara
        middle = (start + end) / 2;
    }
    return -1;
}
// for the optimum solution
// int middle = start + (end - start) / 2;
int main()
{
    int even[6] = { 11, 22 , 33,  44, 66, 77};

    int odd[5] = {10, 22, 30, 40, 50};
    int target = 11;

    cout << BinarySearch(even, target, 6);
}