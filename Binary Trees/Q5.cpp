987. Vertical Order Traversal of a Binary Tree

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // creating a map
        map<int, map<int, vector<int> >> mp;
        queue<pair<TreeNode*, pair<int, int> >> q;
        // creating queue for inserting level and horizontal distance
        // for level order traversal
        vector<vector<int>> ans;
        // for final answer
        if(root == NULL) return ans;
        // sabse pahale root ka data push karo and horizonla and level also
        q.push(make_pair(root, make_pair(0,0)));
        // initially 0,0 hai
        while(!q.empty()){
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            // Now ab isme se hum ek ek karke values niklenge
            TreeNode* frontNode = temp.first;
            // for horizontal distance
            // pair ke andar 2nd pair ki first value int -- hd
            int hd = temp.second.first;
            // for level
            int level = temp.second.second;
            // Now nodes ke corresponding uski entry banado map 
            mp[hd][level].push_back(frontNode->val);
            // if left me jayenge toh horizontal distance -1 hoga
            // ans level badh jayega after each traversal
            if(frontNode->left){
                q.push(make_pair(frontNode->left, make_pair(hd-1 , level + 1)));
            }
            // right me distance increment ho rha hai positive 1 se
            if(frontNode->right){
                q.push(make_pair(frontNode->right, make_pair(hd+1 , level + 1)));
            }
        }
        //  for answer
        for(auto i : mp){
            vector<int> col;
            for(auto j : i.second){
                // by this we will get the vector
                sort(j.second.begin(), j.second.end()); // Optional: if values need sorting
                for(auto k : j.second){
                    // finally we get the vector
                    col.push_back(k);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};
