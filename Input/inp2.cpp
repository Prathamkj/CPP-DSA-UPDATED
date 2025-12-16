#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Important points on string
    string s;
    cout<<"Enter the value of String ";
    getline(cin, s);
    // for spaces 
    cout<< s;

    // Now 
    // IF we waant o/p - 1 pratham jaulkar
    int n;
    cin>>n;
    cin>>ignore();
    string s;
    getline(cin, s);
    cout<<n<<" "<<s<<endl;
    return 0;


    // For string Comma seprated Values..
    string s;
    getline(cin, s);   // e.g. "A, B, C"

    stringstream ss(s);
    vector<string> arr;
    string temp;

    // Extract values separated by commas
    while (getline(ss, temp, ',')) {
        // Remove leading spaces (optional)
        stringstream val(temp);
        string word;
        val >> word;   // extracts string safely
        arr.push_back(word);
    }

    // Print output
    for (string x : arr) {
        cout << x << " ";
    }



    // For space seprated values..
    string s;
    getline(cin, s);   // read full line

    stringstream ss(s);   // convert string to stream
    vector<string> arr;
    // here we have changed string instead of int 
    string word;
    // and instead of int num 
    // we made an another string 

    // extract words one by one
    while (ss >> word) {
        arr.push_back(word);
    }

    // traverse and print
    for (auto val : arr) {
        cout << val << " ";
    }
    
}