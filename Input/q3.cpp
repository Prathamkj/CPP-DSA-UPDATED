// Input

// abc123xyz45


// Output

// 15  == sum of the numbers 

// code -- 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int sum = 0;
    for(auto val : s){
        if(isdigit(val)){
            sum += val - '0';
        }
    }
    cout<<sum;
    return 0;
}