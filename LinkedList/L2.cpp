#include <iostream>
using namespace std;

// Creating a Node for Doubly linked list
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // creating a node for the doubly linked list
    Node(int data)
    {
        this->data = data;
        // in starting dono null ke equal hai
        this->prev = NULL;
        this->next = NULL;
    }
};

// print the linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// length of node
int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        // jab tak temp null nhi hota tab tak temp ko aage next karte raho and
        // length ko increment karte raho
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at head
void insertathead(Node *&head, int data)
// Node *&head means we're passing the head by reference, so changes to head will be reflected outside the function.
{
    if (head == NULL)
    {
        // for the empty list
        Node *temp = new Node(data); // fixed: changed 'd' to 'data'
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        // ek new node banaye
        temp->next = head;
        // temp ke next ko head me dala and head ke previous ko temp me dala
        head->prev = temp;
        // head ki postion badhayi
        head = temp;
    }
}

// insert at tail
void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// insert at any position
void insertat(Node *&tail, Node *&head, int data, int pos)
{
    // insert at head
    // agar position 1 hai to insert head me kardo
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }

    // traverse to the position where we want to insert
    Node *temp = head; // ✅ FIX: declare temp
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // if inserting at the last position
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    // creating a node for data
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// delete a node at given position
void DeleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        // for 1st position in the Node
        Node *temp = head;
        if (temp->next != NULL) // check if next exists before accessing
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // in else part we will delete Middle or Last Node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // For tail and the Middle of the Doubly linkedlist
        // Now deleting the Node
        prev->next = curr->next;
        if (curr->next != NULL)
            curr->next->prev = prev;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // Insert at head
    insertathead(head, 20);
    print(head);

    insertathead(head, 30);
    print(head);

    // insert at tail
    insertattail(tail, 25);
    print(head);

    return 0;
}
