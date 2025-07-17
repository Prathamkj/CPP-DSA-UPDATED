110. Balanced Binary Tree

// this is the condition
---> | height(left subtree) - height(right subtree) | <= 1

class Solution {
public:
    // Helper function to check height and update ans
    int checkHeight(TreeNode* node, bool& ans) {
        if (!node) return 0;

        int leftHeight = checkHeight(node->left, ans);
        int rightHeight = checkHeight(node->right, ans);
        
        if (leftHeight - rightHeight > 1 || rightHeight - leftHeight > 1)
        ans = false;
        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        checkHeight(root, ans);
        return ans;
    }
};