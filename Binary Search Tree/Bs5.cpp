Delete Node in BST 

class Solution {
public:
    // helper function to find min value in BST
    TreeNode* minVal(TreeNode* root){
        TreeNode* curr = root;
        while(curr != nullptr && curr->left != nullptr){
            curr = curr->left;
        }
        return curr;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr){
            return root;
        }
        if(root->val == key){
            // here we write all the logic of deletion of the node
            // is 0 child
            if(root->left == nullptr && root->right == nullptr){
                delete root;
                return nullptr;  // fixed missing semicolon
            }
            // for 1 child
            // for left child
            if(root->left != nullptr && root->right == nullptr){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // for right child
            if(root->left == nullptr && root->right != nullptr){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            // 2 child
            if(root->left != nullptr && root->right != nullptr){
                int mini = minVal(root->right)->val;  // fixed from ->data to ->val
                // storing the minimum data on the right side of the node
                // to swithch the value it with
                root->val = mini;  // fixed from root->data to root->val
                root->right = deleteNode(root->right , mini);
                return root;
            }
        }
        else if(root->val > key){  // fixed from val to key
            // toh left part me chale jao
            root->left = deleteNode(root->left, key);
        }
        else{
            root->right = deleteNode(root->right, key);
        }
        return root;  // added to ensure function always returns a TreeNode*
    }
};
