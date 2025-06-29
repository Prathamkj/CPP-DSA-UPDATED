// IMPLEMENTING QUEUE USING LINKED LIST

#include <iostream>
using namespace std;

// Node class for linked list
class Node {
public:
    int data;
    Node* next;
    
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

// Queue class
class Queue {
    Node* start; // front of the queue
    Node* end;   // rear of the queue
    
public:
    Queue() {
        start = nullptr;
        end = nullptr;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node(value);
        
        // If queue is empty
        if (start == nullptr) {
            start = newNode;
            end = newNode;
        }
        else {
            end->next = newNode;
            end = newNode;
        }
        cout << value << " enqueued\n";
    }

    // Dequeue operation
    void dequeue() {
        if (start == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        
        Node* temp = start;
        start = start->next;
        
        // If queue becomes empty after dequeue
        if (start == nullptr) {
            end = nullptr;
        }

        cout << temp->data << " dequeued\n";
        delete temp;
    }

    // Check if queue is empty
    bool isEmpty() {
        return start == nullptr;
    }

    // Get front element
    int front() {
        if (start == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }
        return start->data;
    }

    // Display queue elements
    void display() {
        if (start == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = start;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Example usage
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.front() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue(); // testing empty queue

    return 0;
}
