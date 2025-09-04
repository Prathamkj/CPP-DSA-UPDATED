215. Kth Largest Element in an Array

1. using Min Heap
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        // 2nd largest element so -- here we will apply min heap
        // because we want that smaller element in thhe top
        for (int num : nums) {
            // pushing values in minheap

            minHeap.push(num);
            // humne pahale min heap bana liyaa
            // so we know min heap me root values is always smaller than leaf or it's child
            if (minHeap.size() > k) {
                // minheap me largest values toh last me hi hongi n 
                // if size of minheap is grater than k then pop out the element
                minHeap.pop();
                // so after poping out the elements one by one from root
                // minheap will balance out it each root position from first minimum to second minimum
                //  and the top of queue will be updated to another second min values
            }
        }
        // returning thhe top value of min heap
        return minHeap.top();        
    }
};

// For kth smallest element
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    // Max heap
    priority_queue<int> pq;

    // Step 1: Push first k elements into max-heap
    for (int i = l; i < l + k; i++) {
        pq.push(arr[i]);
    }

    // Step 2: Traverse remaining elements
    for (int i = l + k; i <= r; i++) {
        if (arr[i] < pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    // Step 3: Top element is kth smallest
    return pq.top();
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Kth Smallest Element is: " 
         << kthSmallest(arr, 0, n - 1, k) << endl; 
    // Output: 7
}

