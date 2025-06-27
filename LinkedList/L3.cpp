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
void insertNode(Node* &tail ,int element , int data){
    // empty list
    if(tail == NULL) {
        Node* newNode = new Node(d) :
        tail = newNode;
        newNode →> next = newNode;
    }
    else {
        //non-empty list
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr-›data != element) <
        curr = curr →> next;
    }
    //element found - curr is representing element wala node
    Node* temp = new Node (data);
    temp → next = curr → next;
    curr →› next = temp;

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