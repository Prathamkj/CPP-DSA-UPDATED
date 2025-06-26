Doubly linked list Insertion at given position

GFG Question --->

class Solution {
  public:
    // Function to insert a new node after given position in doubly linked list.
    Node* addNode(Node* head, int pos, int data) {
        // Step 1: Create a new node with the given data
        Node* newnode = new Node(data);
        
        // Step 2: Create a temp pointer and move it to the 'pos'-th node
        Node* temp = head;
        for (int i = 0; i < pos; i++) {
            if (temp == nullptr) {
                // If position is beyond the list length, return head unchanged
                return head;
            }
            temp = temp->next;
        }

        // Step 3: Insert newnode after 'temp'
        // for the mid and first position...
        newnode->next = temp->next;
        newnode->prev = temp;

        if (temp->next != nullptr) {
            temp->next->prev = newnode;
        }
        // for the last position 
        temp->next = newnode;

        // Step 4: Return the head of the modified list
        return head;
    }
};
