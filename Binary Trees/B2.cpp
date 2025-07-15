Count Leaves in Binary Tree

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Helper function to perform inorder traversal and count leaf nodes
    void inorder(Node* root, int &count) {
        if (root == nullptr) {
            return;
        }

        // Traverse left subtree
        inorder(root->left, count);

        // If leaf node, increment count
        if (root->left == NULL && root->right == NULL) {
            count++;
        }

        // Traverse right subtree
        inorder(root->right, count);
    }
    
    int countLeaves(Node* root) {
        int count = 0;
        inorder(root, count);
        return count;
    }
};

102. Binary Tree Level Order Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // base condition
        if(root == nullptr){
            return {};
        }
        // initializing the vector and the queue here
        vector<vector<int>> ans;
        queue<TreeNode* >q;
        // pushing the root element
        q.push(root);
        // run a loop when queue is not emptyy
        while(!q.empty()){
            // taking the size of queue
            int size = q.size();
            // whatever the size we will traverse for that 
            vector<int> level;
            for(int i=0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != nullptr){
                    q.push(temp->left);
                }
                if(temp->right != nullptr){
                    q.push(temp->right);
                }
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};