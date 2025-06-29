// IMPLEMENTATION OF QUEUE USING ARRAY

#include<bits/stdc++.h>

using namespace std;
class Queue {
  int * arr;
  int start, end, currSize, maxSize;
  public:
    Queue() {
      arr = new int[16];
      // array
      // assiggning the start and the end to -1
      start = -1;
      end = -1;
      currSize = 0;
    }
  // parameterized constructor
  // to create a queue of size maxSize
  // Here You can pass your own size while creating the object.
  Queue(int maxSize) {
  this->maxSize = maxSize;
  arr = new int[maxSize];
  start = -1;
  end = -1;
  currSize = 0;
}

  // for push of the Element
  void push(int newElement) {
    if (currSize == maxSize) {
      // if queue is full then return nothing
      cout << "Queue is full\nExiting..." << endl;
      exit(1);
    }
    // if your end = -1 
    // so you need to now start your both the pointers 
    if (end == -1) {
      start = 0;
      end = 0;
    } 
    // i move end to next position using circular logic 
    // using rotation 
    else
    end = (end + 1) % maxSize;
    arr[end] = newElement;
    cout << "The element pushed is " << newElement << endl;
    currSize++;
  }
  int pop() {
    if (start == -1) {
      cout << "Queue Empty\nExiting..." << endl;
    }
    // assinning the fist value
    int popped = arr[start];
    if (currSize == 1) {
      // If only one element (currSize == 1), reset both pointers to -1 (now empty).
      start = -1;
      end = -1;
    } 
    // do the same shit for start
    else
    // Otherwise, move start to next using (start + 1) % maxSize.
      start = (start + 1) % maxSize;
      currSize--;
    return popped;
  }
  int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currSize;
  }

};

int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}