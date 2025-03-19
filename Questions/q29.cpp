#include <iostream>
using namespace std;

void PrintSubArray(int arr[], int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {   // Include last element
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    PrintSubArray(arr, n);
    return 0;
}