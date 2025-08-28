Post-order Traversal of Binary Tree using stack

1. Using 2 Stack

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root == NULL) return postorder;

        stack<TreeNode*> st1, st2;
        st1.push(root);

        while (!st1.empty()) {
            TreeNode* node = st1.top();
            st1.pop();
            // stack 1 se pop karke stack 2 me push karte jao 
            st2.push(node);
            // and then check karoo stack 1 me left right 
            if (node->left != NULL) st1.push(node->left);
            if (node->right != NULL) st1.push(node->right);
        }
        // After that finally top ans me stack 2 ki top se values print karte jao 
        while (!st2.empty()) {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }

        return postorder;
    }
};

Using 1 Stack

