Add Two Numbers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = nullptr, * curr =  nullptr;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int sum = carry;

            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            ListNode* number = new ListNode(sum%10);
            carry = sum/10;

            if(res == nullptr){
                res = number;
                curr = number;
            }
            else{
                curr->next = number;
                curr = curr->next;
            }
        }
        return res;
        
    }
};

Easy Approach and Understandable


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        int carry =0;
        ListNode* head = l3;
        while(l1 && l2)
        {              
            int value = l1->val+l2->val+carry; 
            carry = value/10;
            l3->next  = new ListNode(value%10);
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