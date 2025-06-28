#include<iostream>
using namespace std;
#include <queue>
#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    // Creating a queue of integers
    queue<int> q;
    // Create another queue from q1
    // queue<int> q2(q1);
    
    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
    // - output will be -- 3 4 5
}

// implementation of queue using Array
class Queue{
    int front, rear , size;


    Queue(int size){
        front = rear = -1;
        this->size = size;
        int *arr = new int[size];
        // creating the new queue
    }

    // push or rear operation
    void rear(){
        
    }
};