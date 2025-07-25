Left View of Binary Tree

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    void solve (Node* root, vector<int>& ans , int level){
        if(root == nullptr) return ;
        if(level == ans.size()){
            ans.push_back(root->data);
        }
        solve(root->left, ans, level + 1);
        solve(root->right, ans , level + 1);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        solve(root , ans , 0);
        return ans;
    }
};

Right View of Binary Tree

class Solution {
  public:
    void solve(Node* root, vector<int>& ans, int level) {
        if (root == nullptr) return;

        // If this is the first node of its level
        if (level == ans.size()) {
            ans.push_back(root->data);
        }

        // Traverse right first, then left (for right view)
        solve(root->right, ans, level + 1);
        solve(root->left, ans, level + 1);
    }

    vector<int> rightView(Node *root) {
        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};
