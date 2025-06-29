// IMPLEMENTATION OF QUEUE USING STACKS

#include <bits/stdc++.h>
using namespace std;

struct Queue {
  stack<int> s1, s2;

  // Push elements in queue
  void Push(int data) {
    // Move all elements from s1 to s2
    while (!s1.empty()) {
      s2.push(s1.top());
      s1.pop();
    }
    // Insert new element into s1
    cout << "The element pushed is " << data << endl;
    s1.push(data);
    // Move all elements back from s2 to s1
    while (!s2.empty()) {
      s1.push(s2.top());
      s2.pop();
    }
  }

  // Pop the element from the queue
  int Pop() {
    if (s1.empty()) {
      cout << "Queue is empty";
      exit(0);
    }
    int val = s1.top();
    s1.pop();
    return val;
  }

  // Return the topmost element from the queue
  int Top() {
    if (s1.empty()) {
      cout << "Queue is empty";
      exit(0);
    }
    return s1.top();
  }

  // Return the size of the queue
  int size() {
    return s1.size();
  }
};

int main() {
  Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element popped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.size() << endl;
}
