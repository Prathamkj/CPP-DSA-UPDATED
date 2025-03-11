#include <iostream>
using namespace std;

// Implementation of stack using array
class Stack {
private:
    int top;
    int *arr;
    int size;

public:
    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push function
    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop function
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    // Peek function (renamed from top to avoid conflicts)
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1; // Returning a default invalid value
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(22);
    st.push(33);

    cout << st.peek() << endl; // Should print 33
    st.pop();
    cout << st.peek() << endl; // Should print 22
    return 0;
}
