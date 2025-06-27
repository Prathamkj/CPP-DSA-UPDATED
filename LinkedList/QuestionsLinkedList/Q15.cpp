Check If Circular Linked List

class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if (head==NULL) return true;
        Node *slow = head;
        Node *fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast) return true;
        }
        return false;

    }
};