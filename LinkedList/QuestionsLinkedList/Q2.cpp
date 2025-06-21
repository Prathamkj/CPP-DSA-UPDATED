876. Middle of the Linked List
1st Approach
class Solution {
public:
    int length(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
            int len = length(head);
            // here we have taken the length of the linkedlist
            int ans = (len / 2);
            // ans baneyenge len/2
            int cnt = 0;
            ListNode* temp = head;
    
            while (cnt < ans) {
                temp = temp->next;
                cnt++;
            }
            return temp;
        }
};

✅ What does return temp; do?
This returns a pointer to a node in the linked list — specifically, to the node at the middle.

In this case:

cpp
Copy
Edit
temp → 30 → 40 → 50 → NULL
You're not returning the entire original list, you're returning a pointer to the middle node. So, the values before 30 (10 → 20) are no longer accessible from temp.
/////////////////////////////////////
2nd Approach
Slow and Fast Approach
low moves one step each time: slow = slow->next

fast moves two steps: fast = fast->next->next

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        // isme aagar fast null tak paucha toh lloop exit
        // and if fast = null thenn we return the slow which  is mid value
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};