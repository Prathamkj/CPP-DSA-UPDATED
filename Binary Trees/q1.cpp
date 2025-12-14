110. Balanced Binary Tree
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// -------- TreeNode Structure --------
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// -------- Solution Class --------
class Solution {
public:
    // Helper function that returns height and checks balance
    int checkHeight(TreeNode* node, bool &ans) {
        if (!node) return 0;

        int leftHeight = checkHeight(node->left, ans);
        int rightHeight = checkHeight(node->right, ans);

        if (abs(leftHeight - rightHeight) > 1)
            ans = false;

        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        checkHeight(root, ans);
        return ans;
    }
};

// -------- Main Function --------
int main() {

    /*
        Creating this tree:

                1
               / \
              2   3
             /
            4

        This tree IS balanced.
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution s;
    if (s.isBalanced(root))
        cout << "Tree is Balanced" << endl;
    else
        cout << "Tree is NOT Balanced" << endl;

    return 0;
}

