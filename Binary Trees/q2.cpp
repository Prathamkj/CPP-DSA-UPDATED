/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
Zig Zac Traversal
class Solution {
  public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root) {
        // Code here
        // Zig 
        // from level order traversal
        vector<int> ans;
        queue<Node*> q;
        // pointer that set left to right value to true
        bool ltr = true;
        // 
        q.push(root);
        while(!q.empty()){
            // if queue is empty
            int size = q.size();
            vector<int> level; 
            for(int i=0; i<size; i++){
                // running loop till size
                Node* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                // pushing the left and right values in queue
                level.push_back(temp->data);
            }
            if(!ltr){
                // means our level is not ltr and it is rtl so we needt ro reverse the levels
                reverse(level.begin(), level.end());
                // reverse completed
            }
            // after each step reset the ltr
            ltr = !ltr;
            // answer ke end me sare sare elements store kar diye
            ans.insert(ans.end(), level.begin(), level.end());
        }
        return ans;
    }
};