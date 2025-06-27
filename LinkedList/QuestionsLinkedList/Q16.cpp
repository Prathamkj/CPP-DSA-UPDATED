148. Sort List

class Solution {
private:
    // for finding the mid element
    ListNode* findmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // easy merge function for 2 sorted linked lists
    ListNode* merge(ListNode* list1, ListNode* list2) {
        // Dummy node to help build the new list easily
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // If any nodes left in either list, append them
        if (list1 != nullptr) current->next = list1;
        if (list2 != nullptr) current->next = list2;

        // Return the merged list starting from dummy->next
        return dummy->next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        // Here we will take the mid for divide of the linkedlist
        ListNode* mid = findmid(head);

        // By this we divided the left and right part of the linkedlist
        ListNode* left = head;
        // and right is 
        ListNode* right = mid->next;
        mid->next = nullptr;

        // isse 2 Linkedlist ban gyi
        // Now we sort
        // recursively to sort both
        left = sortList(left);
        right = sortList(right);

        // merging both
        ListNode* result = merge(left, right);
        return result;
    }
};