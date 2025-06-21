206. Reverse Linked List
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            // previous null hai yaha parr
            ListNode* curr = head;
            while (curr != NULL) {
               ListNode* forward = curr -> next;
               curr->next = prev;
               prev = curr;
               curr = forward;
            }
            // in last previous will be the head of the linkedlist
            // so that's why we are returning previous
            return prev;        
            // that's why we return previous
            // prev is now pointing to node 3, which is the new head of the reversed list.
        }
    };