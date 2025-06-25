2095. Delete the Middle Node of a Linked List

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            delete head;
            return nullptr;
        }

        // temp new dummy node before head
        ListNode* temp = new ListNode(0);
        temp->next = head;

        ListNode* slow = temp;
        ListNode* fast = temp;

        // Move fast two steps and slow one step
        while (fast->next != nullptr && fast->next->next != nullptr) {
            // fast ka next and fast ka next->next bhi nhi hona chaiye nullptr
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete middle node
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;
        return temp->next;
    }
};
