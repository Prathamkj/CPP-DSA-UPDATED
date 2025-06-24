Find length of Loop



class Solution {
  public:
    // Helper function to count the length of the loop
    int countLoopLength(Node* meet) {
        int cnt = 1;
        Node* ptr = meet;
        while (ptr->next != meet) {
            ptr = ptr->next;
            cnt++;
        }
        return cnt;
    }

    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return countLoopLength(slow);
            }
        }

        return 0; // No loop
    }
};
