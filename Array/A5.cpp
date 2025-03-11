// REVERSE AN ARRAY
#include <iostream>
using namespace std;
void reverseArray(int array[], int size)
{
    int start = 0;
    // start 0 se
    int end = size - 1;
    // ennding size -  1 se because end ka index de rhe hai
    while (start < end)
    {
        swap(array[start], array[end]);
        // swap
        start++;
        end--;
    }
}
// void reverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n-1;
    
//     while(start < end){
//         int temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;
//         start++;
//         end--;
        
//     }
    
    
// }
int main()
{
    int array[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArray(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }
    cout << endl;
    return 0;
}
// first element is swaped from last and other elements aisse hi swap honge
// swap function to swap(val1 , val2) elements

    //    //swap
    //         int temp = arr[last];
    //         arr[last] = arr[first];
    //         arr[first] = temp;