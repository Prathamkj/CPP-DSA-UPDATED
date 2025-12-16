#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of n";
    cin >> n;

    // now array input 
    int arr[n];
    // array of n size named arr
    for(int i=0; i<n; i++){
        cin >> arr[i];
        // taking array input values 
    }

    // Now for vectors
    vector<int> ans;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }

    // Now if the value of n is not given 
    // so it only given as - 1 2 3 4 5 6
    // then for that we will use string
    string s;
    getline(cin, s);
    stringstream ss(s);
    // taking a pointer of each character ans also conveering into the int values
    int num;
    vector<int> ans;
    while(ss >> num){
        ans.push_back(num);
    }
    for(auto a : ans){
        cout << a << " ";
    }

    // Now for the space and comma seprated values

    string s;
    getline(cin, s);
    stringstream ss(s);

    vector<int> arr;
    string temp;
    while(getline(ss, temp, ",")){
        stringstream val(temp);
        int num;
        val >> num;
        arr.push_back(num);
    }
    for(auto a : arr){
        cout << a << " ";
    }
}   