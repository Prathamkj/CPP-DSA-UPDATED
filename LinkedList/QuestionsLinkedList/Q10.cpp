328. Odd Even Linked List

class Solution {
    
public:
    ListNode* oddEvenList(ListNode* head) {
        // Base condition
        if(head == NULL && head->next == NULL){
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;
        while(even!=nullptr && even->next != nullptr){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;

        }
        // Now last wali odd value ko even me assign kare
        odd->next = evenHead;
        return head;
    }
};