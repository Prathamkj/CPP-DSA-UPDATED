#include <iostream>
#include <deque>

using namespace std;
int main(){

    // Inserting elements at back and front
    dq.push_back(5);
    dq.push_front(0);

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