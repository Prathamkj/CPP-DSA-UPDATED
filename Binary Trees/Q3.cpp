Sum Tree

/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    int sum(Node* root){
        if(!root) return 0;
        if(root->left == nullptr && root->right == nullptr) return root->data; // Leaf node case
        int left = sum(root->left);
        int right = sum(root->right);
        return root->data + left + right;
    }

    bool isSumTree(Node* root) {
        if(root == nullptr || (root->left == nullptr && root->right == nullptr)){
            return true;
        }
        
        bool leftCheck = isSumTree(root->left);
        bool rightCheck = isSumTree(root->right);
        
        int leftSum = sum(root->left);
        int rightSum = sum(root->right);
        
        if(leftCheck && rightCheck && root->data == leftSum + rightSum){
            return true;
        }
        else{
            return false;
        }
    }
};
