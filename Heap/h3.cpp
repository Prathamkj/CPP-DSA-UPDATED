#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;        // assume root is largest
    int left = 2 * i;       // left child index
    int right = 2 * i + 1;  // right child index

    if (left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Step 1: Build heap (O(n))
    for (int i = n / 2; i > 0; i--) {
        // non leaf elements ko heapify karna hai
        heapify(arr, n, i);
    }
    // swap first and last element
    // then decrement the size by 1 because last element is at its correct position
    // then again call heapify on the root element
    int size = n;
    while(size > 1) {
        cout << arr[1] << " "; // Print max element
        swap(arr[1], arr[size]); // Move max to end
        size--;
        heapify(arr, size, 1); // Heapify root element
    }
    // Alternative approach
    // for loop
    //: Swap root with last, then heapify reduced heap
    // for (int i = n; i > 1; i--) {
    //     // loop from the last 
    //     // and swap last element with first element
    //     swap(arr[1], arr[i]);   // put max at end
    //     // swap karne ke bad ab hume heapify karna hai
    //     // and size--
    //     heapify(arr, i - 1, 1); // heapify reduced heap
    // }
}

int main() {
    int arr[6] = {-1, 54, 53, 55, 52, 50}; // 1-based indexing
    int n = 5;

    cout << "Original Array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// gfg
class Solution {
  public:
    void heapify(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(vector<int>& arr) {
        int n = arr.size();

        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }

        // Shrink heap using size
        int size = n;
        while (size > 1) {
            swap(arr[0], arr[size - 1]);
            size--;
            heapify(arr, size, 0);
        }
    }
};
