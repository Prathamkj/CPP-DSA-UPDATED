142. Linked List Cycle II


class Solution {
 public:
  ListNode* detectCycle(ListNode* head) {
    // here we want to return the node 
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=nullptr && fast->next!= nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            // Now the cycle exist
            // Step 2: Find the starting point of the cycle
           slow = head;
           while(slow != fast){
            slow = slow->next;
            fast = fast->next;
           }
           return slow;

        }
    }
    return nullptr;
  }
};