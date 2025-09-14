#include <bits/stdc++.h>
using namespace std;

bool isMinHeap(vector<int>& arr) {
    int n = arr.size();

    // Check all non-leaf nodes
    for (int i = 0; i <= (n - 2) / 2; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        // taking out the left and right child index

        // If left child exists and is smaller than parent
        
        if (left < n && arr[i] > arr[left])
            return false;

        // If right child exists and is smaller than parent
        if (right < n && arr[i] > arr[right])
            return false;
    }

    return true;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    
    if (isMinHeap(arr))
        cout << "The array represents a Min-Heap\n";
    else
        cout << "The array does NOT represent a Min-Heap\n";

    return 0;
}
