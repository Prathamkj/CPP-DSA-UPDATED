#include <iostream>
#include <deque>

using namespace std;
int main(){

    // Deque is implemented as like double ended list
    // Double Ended Queue
    deque<int> d = {1,2,3,4,5};
    // dynamic arrays
    for(int val : d){
        cout<<val<<" ";
    }
    cout<< d[2]; 
    // so it is valid

}