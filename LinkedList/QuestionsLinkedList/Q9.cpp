234. Palindrome Linked List
// 
APPROACH -> 1
class Solution {
private:
    bool checkpalindrome(vector<int> arr){
        int st = 0;
        int end = arr.size() - 1;
        while(st <= end){
            if(arr[st] != arr[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        // created a vector here and assigned all the values into the vector
        vector<int> ans;
        ListNode* temp = head;
        while(temp != nullptr){
            ans.push_back(temp->val);
            // push kardiyya temp ki sari values ko
            temp = temp->next;
        }
        return checkpalindrome(ans);
    }
};



