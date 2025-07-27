Insert into a Binary Search Tree

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // Base case: found the spot to insert
        if (root == NULL) {
            // if root value is null then we make a node and return it.
            TreeNode* newNode = new TreeNode(val);
            return newNode;
        }

        // If value is smaller, go left
        if (val < root->val) {
            // here we are inserting value in left so we take
            // root->left = insertIntoBST
            root->left = insertIntoBST(root->left, val);
        }
        // If value is greater, go right
        else {
            root->right = insertIntoBST(root->right, val);
        }

        // Return the unchanged root pointer
        return root;
    }
};