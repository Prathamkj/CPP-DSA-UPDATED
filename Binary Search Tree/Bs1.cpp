700. Search in a Binary Search Tree
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) {
            return nullptr;
        }
        if (root->val == val) {
            // if the value is equal then return the root
            return root;
        } else if (root->val > val) {
            // else if the root value is grater than the target value 
            // then search in left part 
            return searchBST(root->left, val);
        } else {
            // and if the root value is less than the target then search in right part
            return searchBST(root->right, val);
        }        
    }
};

