// IMPLEMENTATION OF STACK USING QUEUE

#include<bits/stdc++.h>

using namespace std;

class Stack {
  queue < int > q;
//   here we have used a inbuilt library of queue
  public:
//   push operation
    void Push(int x) {

      int s = q.size();
      q.push(x);
    //   pushing the element at the back of the queue
      for (int i = 0; i < s; i++) {
        // running a loop
        // pushing onto the queue in front
        q.push(q.front());
        q.pop();
      }
    }
    // pop operation
  int Pop() {
    int n = q.front();
    q.pop();
    return n;
  }
  int Top() {
    return q.front();
  }
  int Size() {
    return q.size();
  }
};

int main() {
  Stack s;
  s.Push(3);
  s.Push(2);
  s.Push(4);
  s.Push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.Pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();

}