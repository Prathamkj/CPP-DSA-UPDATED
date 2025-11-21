// string consist of * and #
// min no. of * and # to find valid
// valid if # = * 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tcs(string s, int n){
    int hash = 0;
    int mul = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '#'){
            hash++;
        }
        else if(s[i] == '*'){
            mul++;
        }
    }
    return mul - hash;
}


int main(){
    string s;
    cout<<"Enter hash and Multiply : ";
    getline(cin, s);

    int n = s.size();
    cout<<tcs(s, n)<<endl;
    return 0;
}