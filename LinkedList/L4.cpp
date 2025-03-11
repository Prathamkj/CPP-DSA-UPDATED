// Reverse of a Linkedlist
// first method
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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            while (curr != NULL) {
               ListNode* forward = curr -> next;
               curr->next = prev;
               prev = curr;
               curr = forward;
            }
            // in last previous will be the head of the linkedlist
            // so that's why we are returning previous
            return prev;        
        }
    };

// Recursive Approach

// Q2 876. Middle of the Linked List
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
        int length(ListNode* head) {
            // here we have take the lenght of linkedlist
            int len = 0;
            while (head != NULL) {
                len++;
                head = head->next;
            }
            return len;
        }
        ListNode* middleNode(ListNode* head) {
            int len = length(head);
            // here we have taken the length of the linkedlist
            int ans = (len / 2);
            int cnt = 0;
            ListNode* temp = head;
    
            while (cnt < ans) {
                temp = temp->next;
                cnt++;
            }
            return temp;
        }
    };