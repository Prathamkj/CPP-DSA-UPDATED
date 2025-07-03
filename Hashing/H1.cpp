// // Hashing is a technique used to map data of arbitrary size to fixed-size values.
// // The hash function is used to compute the index for storing the data in a hash table.

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }
//     // precompute
//     int hash[1031] = {0};
//     for (int j = 0; j<n; j++) {
//         hash[arr[j]] += 1;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetch
//         cout << hash[number] << endl;
//     }
//     return 0;
// }

// Map in Stl
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Use vector instead of variable-length array (VLA)
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Declare map to store frequency
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // Check if number exists in map
        cout << mp[number] << endl;
    }

    return 0;
}
