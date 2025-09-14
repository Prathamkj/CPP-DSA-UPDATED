// Heapify Algorithm
// you have given an array of data - 54 53 55 52 50
// convert into heap

// if we look at the last index 
// leaf node in indexes me present hogi = (n/2 + 1) th index to n th index
// LEAF NODES = ( N/2 + 1 ) to N th index - iske andar lie karengi

// hume 1 - n/2 wale part ko uski sahi position pe lana hai

// we will run a loop from n/2 to 1 and call heapify function
// heapify function will take the index and make sure woh shi position pe chala jaye
#include <iostream>
using namespace std;
// Here we are Making a max heap 
// Using Array representation of Heap
// Time Complexity - O(log n)

void heapify(int arr[], int n, int i)
{
    // it is a 1 based indexing
    int largest = i; // assume root is largest
    // root -> Largest element
    int left = 2 * i; // left child index
    int right = 2 * i + 1; // right child index

    if (left <= n && arr[largest] < arr[left])
    {
        // Largest means root
        //  root < left
        // so now the root will be at left index
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        // update largest if right child is greater than largest so far
        largest = right;
    }
    if (largest != i)
    {   
        // swap the elements
        // then swap and call heapify again
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // calling heapify function
    for (int i = n / 2; i > 0; i--)
    // so we know that leaf nodes n/2 + 1 to n th index tak hoti hai toh
    // Bachi hue nodes ko hi heapify karna hai -- means -- backward loop from n/2 to 1
    // running the backward loop 
    // n/2 se 1 tak 
    {
        heapify(arr, n, i);
    }
    cout << "Printing the array now " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}