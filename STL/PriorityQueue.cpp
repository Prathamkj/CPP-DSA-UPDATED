#include <iostream>
#include <queue>
// just omc;ide queue for priority queue
using namespace std;
// PRIORITY QUEUE
int main()
{
    priority_queue<int> pq;
    // isme highest priority element top pe aa jayega
    pq.push(10);
    pq.push(20);
    pq.push(30);
    // for reverse order of the queue
    priority_queue<int, vector<int>,greater<int> > q;

    // Largest element on top
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}