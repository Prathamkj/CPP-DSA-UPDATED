// SET
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    // Cointains unique value in particular sorted value
    s.insert(10);
    s.insert(20);
    s.insert(30);
    // Set duplicate value ko ignore kar deta hai
    // And order we get is sorted order
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(auto val:s){
        cout<<val<<" ";
    }
    // Lower bound and upper bound 
    s.lower_bound(4);
    // minimum value se badi value chaiyee ya end ki vlaue chaiye
    // Upper bound is should be graterr than key

    // ** LOWER BOUND SHOULD NOT LESS THAN KEY
    // ** UPPER BOUND SHOULD BE GREATER THAN KEY


    // MULTISET AND UNORDERED SET 
    // multiset includes all the duplicate elements
} 