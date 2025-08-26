// REVERSE THE DOBULY LINKEDLIST 
// APPROACH 1
// BY USING STACK

class Solution {
public:
    Node* reverseDLL(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        stack<Node*> st;
        Node* temp = head;
        // in this while loop we pushed all the Linkedlist values to the stack
        // Push all nodes into the stack
        while (temp != nullptr) {
            st.push(temp);
            // incrementing the temp
            temp = temp->next;
        }
        // Assigning the newhead to top 
        // so that we can pop it after finding it
        // New head is the last node
        Node* newHead = st.top();
        st.pop();
        temp = newHead;

        // Rebuild the reversed list
        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();

            temp->next = curr;
            curr->prev = temp;
            temp = curr;
        }

        temp->next = nullptr;
        return newHead;
    }
};

2nd Approach
class Solution {
  public:
    Node* reverse(Node* head) {
        if (head == nullptr || head->next == nullptr) return head;

        Node* currNode = head;
        Node* prevNode = nullptr;

        while (currNode != nullptr) {
            // Store next
            Node* nextNode = currNode->next;

            // Swap pointers
            currNode->next = prevNode;
            currNode->prev = nextNode;
            // Here we are just swapping the values 
            // Move forward
            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode; // New head after reversal
    }
};

