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
        Node* newNode = new Node(data);
        // if tail = NULL then we assign tail directly to newnode
        tail = newNode;
        newNode →> next = newNode;
    }
    else {
        //non-empty list
        //assuming that the element is present in the list
        // current is pointing towards tail
        Node* curr = tail;
        while(curr-›data != element) {
        // curr->data is not equal to element then we increment the current
        curr = curr →> next;
        }
    }
    // Now after element is f ound then we do the rest of the things
    //element found - curr is representing element wala node
    Node* temp = new Node (data);
    temp → next = curr → next;
    curr →› next = temp;

}
// For traversing the circural linked List
void traverse(Node* tail){
     if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        // printingg the data of the tail
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

// Deletion of the Node in Circural Linked List
void DeleteNode(Node* tail, int value){
    // for first empty list
    if(tail == NULL){
        cout<< "List is empty" <<endl;
        return;
    }
    else{
        // for non empty
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev->next = curr->next;
        // for the single node
        if(curr == prev){
            tail = nullptr;
        }

        else if(tail == curr){
            tail = prev;
        }
        curr->next = nullptr;
        delete curr;
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