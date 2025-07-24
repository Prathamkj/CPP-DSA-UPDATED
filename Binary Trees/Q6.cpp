Top View of Binary Tree

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        // storing final ans here
        if(root == nullptr){
            return ans;
        }
        map<int,int> mp;
        // first is hd and second is node
        // for one to one mapping
        queue<pair<Node*, int>> q;
        // Node and horizontal distance
        // initially root ki value dal di
        // in pair
        q.push(make_pair(root, 0));
        while(!q.empty()){
            // front ki value nikali
            pair<Node* , int> temp = q.front();
            q.pop();
            // paheli wali value -- > is front node
            Node* frontNode = temp.first;
            // and horizontal distance is 2nd value in pair
            int hd = temp.second;
            // one to one mapping
            // if one value is present or horizontal dist then do nothing
            if(mp.find(hd) == mp.end()){
                // if horizontal distance Nhi mila toh frontNode ka data dal do 
                mp[hd] = frontNode -> data;
            }
            if(frontNode -> left){
                q.push(make_pair(frontNode->left , hd - 1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right , hd  + 1));
            }
        }
        for(auto val : mp){
            ans.push_back(val.second);
        }
        return ans;
    }
};