// Queue   
// Elements enter in queue fron rear end and exit from front.
#include<iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    // Accessing the front and back elements
    cout << q.front() << endl;
    cout << q.back() << endl;
}