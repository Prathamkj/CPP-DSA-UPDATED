// SECOND LARGEST ELEMENT IN ARRRAY
#include <iostream>
using namespace std;

int SecondLargeElement(int array[], int size)
{   
    // Largest element is initialized by 0th index
    int largest = array[0];
    int secondlargest = -1;
    for (int i = 1; i < size; i++){
        if (array[i] > largest) {
            secondlargest = largest;
            largest = array[i];
        }
        else if(array[i] != largest && array[i] > secondlargest) {
            secondlargest = array[i];
        }
    }
    return secondlargest;
    
}

int SecondSmallest(int array[], int size){
    int 
}

// int PrintArray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int array[7] = {1, 2, 8, 8, 8, 8, 8};
    int size = 7;

    cout<<SecondLargeElement(array, size);
    // PrintArray(array, size);
}
// ONE OF THE SOLUTION
// int getSecondLargest(vector<int> &arr) {
//         // Code Here
//         int n = arr.size();
//         sort(arr.begin() , arr.end());
//         for(int i=n-2;i>=0;i++){
//             if(arr[i]!=arr[n-1]){
//                 return arr[i];
//         }
//     }
// }