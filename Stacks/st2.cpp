// IMPLEMENTING THE STACK USING LINKEDLIST
#include<iostream>
using namespace std;

struct stackNode {
  int data;
  stackNode * next;
  int size;
  stackNode(int d) {
    data = d;
    next = NULL;
  }
};
struct stack {
  stackNode * top;
  int size;
  stack() {
    top = NULL;
    size = 0;
  }
  void stackPush(int x) {
    stackNode * element = new stackNode(x);
    element -> next = top;
    top = element;
    cout << "Element pushed" << "\n";
    size++;
  }
  int stackPop() {
    if (top == NULL) {
      return -1;
    }
    int topData = top -> data;
    stackNode * temp = top;
    top = top -> next;
    delete temp;
    size--;
    return topData;
  }
  int stackSize() {
    return size;
  }
  bool stackIsEmpty() {
    return top == NULL;
  }
  int stackPeek() {
    if (top == NULL) return -1;
    return top -> data;
  }
  void printStack() {
    stackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
  }
};
int main() {
  stack s;
  s.stackPush(10);
  cout << "Element popped: " << s.stackPop() << "\n";
  cout << "Stack size: " << s.stackSize() << "\n";
  cout <<"Stack empty or not? "<<s.stackIsEmpty()<<"\n";
  cout << "stack's top element: " << s.stackPeek() << "\n";
  return 0;
}

/*
GFG SOLUTION

class MyStack {
  private:
    StackNode *top;

  public:
    // Function to push an element onto the stack
    void push(int x) {
        // Create a new node with the given data
        StackNode* new_node = new StackNode(x);

        // Check if memory allocation failed (only useful if using nothrow)
        if(!new_node){
            return;
        }

        // Make the new node point to the current top
        new_node->next = top;

        // Update top to be the new node
        top = new_node;
    }

    // Function to remove and return the top element of the stack
    int pop() {
        // Check if the stack is empty
        if(top == NULL){
            return -1; // Return -1 to indicate underflow
        }
        else {
            // Store the data to return
            int popped = top->data;

            // Save the current top node in a temp variable
            StackNode* temp = top;

            // Move top to the next node
            top = top->next;

            // Free memory of the removed node
            delete temp;

            // Return the popped value
            return popped;
        }
    }
};

*/