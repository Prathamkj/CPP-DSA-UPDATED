19. Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        // fast and slow pointer
        ListNode* fast = temp;
        ListNode* slow = temp;
        // assigning the fast till n 
        for(int i=0; i<n; i++){
            fast = fast->next;
            // so fast n pe pauch gya 
        }
        // 
        while(fast!=nullptr && fast->next!= nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        // Now slow node reaches to the previous of deletion node
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;
        // returning the next value of the temp...
        return temp->next;
    }
};

2nd Approach

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // First pass: Find length of the list
        // here we have calculated the lenght of the linked list
        int len = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            len++;
            curr = curr->next;
        }

        // If head node is to be removed
        
        if (n == len) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Second pass: Go to (len - n)th node
        curr = head;
        for (int i = 1; i < len - n; i++) {
            curr = curr->next;
        }

        // Delete the node
        ListNode* del = curr->next;
        curr->next = curr->next->next;
        delete del;

        return head;
    }
};
