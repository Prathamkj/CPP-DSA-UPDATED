21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        ListNode* dummy = new ListNode(0);
        //dummy points to a node with value 0 that we created just to help us start the list.
        // Starting pointer for merging the list
        ListNode* temp = dummy;

         while(h1 != nullptr && h2 != nullptr) {
            if(h2->val >= h1->val) {
                temp->next = h1;
                h1 = h1->next;
                temp = temp->next;
            } else {
                temp->next = h2;
                h2 = h2->next;
                temp = temp->next;
            }
        }

        // Attach the remaining part
        if(h1 != nullptr) {
            temp->next = h1;
        } else {
            temp->next = h2;
        }
        // dummy->next points to the first real node of the merged list 
        //(like 1, if lists were 1→3→5 and 2→4→6).
        return dummy->next;
    }
};
