103. Binary Tree Zigzag Level Order Traversal

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);

        // we take initially left to right -- true
        // and if it happens then we reverse that 
        bool leftToRight = true;
        // here true means -> L -> R
        // and false means R->L
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; ++i) {
                TreeNode* temp = q.front();
                q.pop();
                // is loop me humne traversal kiya
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                level.push_back(temp->val);
            }
            // here we are reversing the values for R -> L
            // If the current level should be right to left, reverse it
            if (!leftToRight) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);
            // every time switching the values flip the direction 
            // one by one 
            leftToRight = !leftToRight;  // Flip direction for next level
            // Flip the value of leftToRight after processing each level.
        }

        return ans;
    }
};
