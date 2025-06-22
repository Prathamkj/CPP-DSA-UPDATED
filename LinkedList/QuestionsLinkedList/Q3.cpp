
83. Remove Duplicates from Sorted List
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while(curr!=nullptr && curr->next != nullptr){
            if(curr->val == curr->next->val){
                curr->next = curr->next->next;
                // yaha par humne current ke next ko aage badhaya hai...
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
