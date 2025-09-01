Rotate Linked List 


class Solution {
public:
    // Return the k-th node (1-indexed) starting from temp
    ListNode* findNthNode(ListNode* temp, int k){
        int cnt = 1;
        while(temp != nullptr){
            if(cnt == k ){
                return temp;                 // found the k-th node
            }
            cnt++;
            temp = temp->next;               // move to next node
        }
        return temp;                         // if k is out of range -> nullptr
    }
    // we know the  if k = 2
    // total lenght is 5 -- 5-2 = 3rd node

public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge cases: empty list or no rotation needed
        if(head == nullptr || k == 0) return head;

        // Find the tail and the length of the list
        // tail next should be pointing to head
        ListNode* tail = head;
        // isse tail last me chale gya
        int len = 1;                         // start at 1 because we're already at head
        while(tail->next != nullptr){
            tail = tail->next;              // move tail to the end
            len = len + 1;                   // count nodes
        }

        // If k is a multiple of len, rotation brings list back to original
        if(k % len == 0){
            // is formula se linkedlist wahi par aa jayegi if it is true
            return head;
        }
        // here we are changing the k 
        k = k % len;                         // reduce k within list length
        // now here k will be the value of k

        // Make the list circular by connecting tail to head
        tail->next = head;
        // its next will be pointing to head
        // The new last node is the (len - k)-th node in the (now circular) list
        ListNode* newLastNode = findNthNode(head , len - k);
        // that's why k = k % length is important
        // length - k will be the position where now the rotation will happen
        // New head is next of newLastNode; then break the circle
        head = newLastNode->next;
        // updating the head
        newLastNode->next = nullptr;

        // Return the rotated list's head
        return head;
    }
};
