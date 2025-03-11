#include <iostream>
using namespace std;
class Node {
    // here we implement the node 
public:
// node ke andar ye do value aayegi
    int data;
    // ye pointer hai jo next node ka address store karega
    Node* next;
    // ye next node ka address store karayega

    Node(int data) {
        this->data = data;
        // new node bane toh usme data dal dena and next ko null kar dena
        this->next = NULL;
    }
};  
// Inserting at the head
void insertAtHead(Node* &head, int data) {
    // isme hum head and data bhej rhe hai
    // new node banayenge
    Node* temp = new Node(data);
    // now temp ka next head ko point karege
    temp->next = head;
    head = temp;
}
// Inserting at the tail
void insertAtTail(Node* &tail, int data) {
    // new node banayenge
    Node* temp = new Node(data);
    // tail ka next temp ko point karega
    tail->next = temp;
    // tail temp ko point karega
    tail = temp;
}
// printing the linkedlist
// Traverse the linkedlist
void print(Node* &head) {
    // here we created a temp because we don't want to change the head
    // and here we are passing the head by reference
    // so that we can change the head to temp
    Node* temp = head;
    // jab tak temp null nahi hota tab tak chalao
    while(temp!=NULL){
        cout<<temp->data<<"->";
        // isse temp aage badh jaayega
        temp = temp->next;
    }
}
// Insert at nth position
void insertAtPosition(Node* & head,int position, int data) {
    Node* temp = head;
    int cnt = 1;
    // sabse pahale traverse karna hai
    while(cnt<position-1) {
        // n-1 tak loop chalaye humne
        temp = temp->next;
        cnt++;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(data);
    // nodeToInsert ka next temp ka next ko point karega
    nodeToInsert->next = temp->next;
    // 
    temp -> next = nodeToInsert;
    
    if(position == 1) {
        // if 1st position pe insert karna hai toh head me insert kar do

        // agar position 1 hai toh insert at head
        insertAtHead(head, data);
        return;
    }
    // for inserting into the last node
    // last node hai toh tail me insert kardo
    // in here we know last position is null so if last position is null then insert at tail 
    if(temp -> next == NULL) {
        insertAtTail(head, data);
        // then inserting into the last position
        return;
    }

}

// Deletion of the node 
void deleteNode(Node* &head, int position) {
    // to delete a position
    if(position == 1) {
        // if 1st position pe delete karna hai toh head me insert kar do
        Node* toDelete = head ;
        // head ko next me point kar do
        head = head->next;
        delete toDelete;
        return;
    }
    else{
        // deleting any middle and last node
        Node* curr = head;
        Node* prev = NULL;
        // current head pe point karega and prev null pe point karega
        int cnt = 1;
        while(cnt<=position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
    }
}
// Deleation of a node 
void deleteNode(Node* &head, int position) {
    // to delete a position
    if(position == 1) {
        // if 1st position pe delete karna hai toh head me insert kar do
        Node* toDelete = head;
        // head ko next me point kar do
        head = head->next;
        // head ko next karke memory free kar do / delete kardo
        delete toDelete;
        return;
    }
    else{
        // deleting any middle and last node
        Node* curr = head;
        Node* prev = NULL;
        // current head pe point karega and prev null pe point karega
        int count = 1;
        while(count<=position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        // prev ka next curr ka next ko point karega
        prev->next = curr->next;
        delete curr;
    }
}




int main() {
    // Node ka ob kect 
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    // tail pointed to node1
    Node* tail = node1;
    print(head);
    // for the tail
    cout<<"Inserting at the tail"<<endl;
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    // for the head
    cout<<"Inserting at the head"<<endl;
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 15);
    print(head);
    // isse ulti valuess print hogi -- so we need to use the tail also


    // Insert at nth position
    cout<<"Inserting at nth position"<<endl;
    InsertAtPosition(head ,2, 25);
    print(head);
    return 0;
}