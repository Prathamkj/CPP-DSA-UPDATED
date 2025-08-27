// LEVEL ORDER TRAVERSAL FROM STRIVER

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level;
            int size = q.size();

            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);

                level.push_back(temp->val);
            }

            ans.push_back(level);
        }
        return ans;
    }
};

Now Java Code 

import java.util.*;

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        if (root == null) return ans;

        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            List<Integer> level = new ArrayList<>();
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode temp = q.poll();

                if (temp.left != null) q.add(temp.left);
                if (temp.right != null) q.add(temp.right);

                level.add(temp.val);
            }

            ans.add(level);
        }

        return ans;
    }
}


