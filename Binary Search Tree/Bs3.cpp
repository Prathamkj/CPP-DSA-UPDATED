Ceil in BST
int findCeil(Node* root, int input) {
    int ceil = -1;
    while (root) {
        if (root->data == input) {
            return root->data;
        } 
        else if (input > root->data) {
            // Go right to find a greater value
            root = root->right;
        } 
        else {
            // root->data > input, so this could be the ceil
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}

Floor in BST
// Function to search a node in BST.
class Solution {
  public:
    int floor(Node* root, int x) {
        int floor = -1;
        while (root) {
            if (root->data == x) {
                return root->data;  // Exact match is the floor
            }
            else if (root->data > x) {
                root = root->left;  // Move left to find smaller values
            }
            else {
                floor = root->data; // Potential floor
                root = root->right; // Try to find a better (closer) floor
            }
        }
        return floor;
    }
};
