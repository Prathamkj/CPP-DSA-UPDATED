To Find Minimum in BST:
// here we just need to search on the left side
int findMin(TreeNode* root) {
    if (root == NULL) return -1; // or appropriate error/flag
    while (root->left != NULL) {
        root = root->left;
    }
    return root->val;
}

To Find Maximum in BST:
// here we just need to search in right side
int findMax(TreeNode* root){
    if(root == nullptr) return -1;
    while(root->right != nullptr){
        root = root->right;
    }
    return root->val;
}
