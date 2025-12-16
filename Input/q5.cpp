#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);

    // input of string
    int st = 0;
    int end = str.size() - 1;
    bool isPalindrome = true;
    // initially it is true
    while(st < end){
        if(str[st] != str[end]){
            isPalindrome = false;
        }
        st++;
        end--;
    }

    if(isPalindrome){
        cout<< "Yes";
    }
    else{
        cout<< "No";
    }

    return 0;
}