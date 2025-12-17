#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);
    stringstream ss(str);
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')){
        stringstream val(temp);
        int num;
        val >> num;
        arr.push_back(num);
    }


    string str;
    getline(cin, str);
    stringstream s
}