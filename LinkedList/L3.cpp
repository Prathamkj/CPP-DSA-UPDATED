#include <iostream>
using namespace std;
// Circular Linked List
class Node {
public:
    int data;
    // node ke structure same rahege yaha
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // Deconstructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<< value<<endl;
    }
};
// insert node
voidinsertNode(Node* &tail ,int element , int data){
    Node* newNode = new Node(data);
    // new node create kare

    if(tail == NULL){
        // for tail is null
        newNode->next = newNode;
        // apne aap ko point kar rha hai
        tail = newNode;
    }else{
        // jab list empty nhi hai
        newNode->next = tail->next;
        tail->next = newNode;
    }
}
int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.insertAtBeginning(5);
    cll.insertAfter(25, 20);

    cout << "Circular Linked List: ";
    cll.traverse();

    cll.deleteNode(5);
    cout << "After deleting 5: ";
    cll.traverse();

    cll.deleteNode(30);
    cout << "After deleting 30: ";
    cll.traverse();

    return 0;
}