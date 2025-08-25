Add Two Numbers



class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // creating a dummy node
        Node* head3 = new Node(0);
        Node* ans = head3;   // tail pointer
        int carry = 0;

        // traverse both lists
        while(head1 != nullptr || head2 != nullptr || carry != 0){
            int sum = carry;
            if(head1 != nullptr){
                sum += head1->data;
                head1 = head1->next;
            }
            if(head2 != nullptr){
                sum += head2->data;
                head2 = head2->next;
            }
            
            carry = sum / 10;
            ans->next = new Node(sum % 10);
            ans = ans->next;
        }

        return head3->next; // skip dummy node
    }
};


Easy Approach and Understandable


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        // created a new node here
        // and assigned that node to head
        int carry =0;
        // here we need carry
        ListNode* head = l3;
        while(l1 && l2)
        {              
            // value means sum = of all val1 + val2 + carry
            int value = l1->val+l2->val+carry; 
            carry = value/10;
            // isse carry milegi
            l3->next  = new ListNode(value%10);
            // ab l3 ko aage badhana hai - sum me last value milegi add karne ko
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;           
        }
        
        while(l1)
        { 
             int value = l1->val+carry; 
            carry = value/10;
            l3->next  = new ListNode(value%10);
            l3 = l3->next;
            l1 = l1->next;
            
        }
        
        while(l2)
        {
             int value = l2->val+carry; 
            carry = value/10;
            l3->next  = new ListNode(value%10);
            l3 = l3->next;
            l2 = l2->next;     
            
        }
        
        if(carry)
        {
            l3 ->next = new ListNode(carry);
        }
        return head->next;
    }
};