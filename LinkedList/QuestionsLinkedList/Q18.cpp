Delete all occurrences of a given key in a doubly linked list

class Solution {
  public:
    Node* deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* temp = *head_ref;

        while (temp != nullptr) {
            if (temp->data == x) {
                Node* nextNode = temp->next;
                Node* prevNode = temp->prev;

                // if deleting head
                if (temp == *head_ref) {
                    *head_ref = nextNode;
                }

                if (nextNode != nullptr) {
                    nextNode->prev = prevNode;
                }
                if (prevNode != nullptr) {
                    prevNode->next = nextNode;
                }

                delete temp;
                temp = nextNode;  // move forward
            }
            else {
                temp = temp->next;
            }
        }

        return *head_ref;
    }
};
// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        if (*head_ref == nullptr) return;

        Node* temp = *head_ref;

        while (temp != nullptr) {
            if (temp->data == x) {
                Node* nextNode = temp->next;

                // If node to be deleted is head
                if (temp == *head_ref) {
                    *head_ref = nextNode;
                }

                // Update links
                if (temp->prev != nullptr) {
                    temp->prev->next = temp->next;
                }
                if (temp->next != nullptr) {
                    temp->next->prev = temp->prev;
                }

                delete temp; // free memory
                temp = nextNode; // move forward
            } else {
                temp = temp->next;
            }
        }
    }
};
