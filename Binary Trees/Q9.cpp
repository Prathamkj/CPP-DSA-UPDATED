Maximum Path Sum in a Binary Tree

124. Binary Tree Maximum Path Sum
// here we need to find the maximum path sum in the binary tree
// A path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections.
// The path must contain at least one node and does not need to go through the root.

formula - val + (maxleft + maxright)
// for any given node


class Solution {
public:
    int help(TreeNode* root, int &sum) {
        if (root == NULL) {
            return 0;
        }
        // comparing with zeroes to remove the -ve value
        int l = max(0, help(root->left, sum));  // Ignore negative paths
        // here we will be calculating the left max sum 
        // and right max elements
        int r = max(0, help(root->right, sum));
        // by summing up all the values of left right and root->val
        sum = max(sum, l + r + root->val);
        // so we get the sum value to be the maximum path sum
        // Update global max path
        return root->val + max(l, r); // Return max gain path up
    }

    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        help(root, sum);
        return sum;
    }
};
