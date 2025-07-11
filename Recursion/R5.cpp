#include <iostream>
using namespace std;

// Reverse string using recursion
void reverse(string& str, int i, int j) {
    if (i > j)
        return;
    swap(str[i], str[j]);
    reverse(str, i + 1, j - 1);
}

// Check if string is palindrome using recursion
bool Palindrome(string str, int i, int j) {
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    else
        return Palindrome(str, i + 1, j - 1);
}

// Sort array using recursion (bubble sort logic)
void sortArray(int *arr, int n) {
    // Base case: if size is 0 or 1, already sorted
    if (n == 0 || n == 1) {
        return;
    }

    // Place the largest element at the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for remaining array
    sortArray(arr, n - 1);
}

int main() {
    // String reverse and palindrome check
    string name = "abba";
    reverse(name, 0, name.size() - 1);
    cout << "Reversed string: " << name << endl;

    bool palindrome = Palindrome(name, 0, name.size() - 1);
    if (palindrome) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is not a Palindrome" << endl;
    }

    // Array sorting
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    sortArray(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    // Recursion basics ennd here
}
