#include<iostream>
#include<vector>

using namespace std;
int main(){
    // to initiallization
    vector<int> v1 = {1,2,3,4,5};
    for(int i : v1){
        // isme i ki value index nhi hogi us indexx me jo value hai woh rahegi
        cout<<i<<endl;
    }
    for(int j: v1){
        cout<<j<<endl;
    }
    // we can initialize vector 2 with the vector 1
    vector<int> v2(v1);   
    // so isko print karne se v1 hi print hoga
    return 0;
}