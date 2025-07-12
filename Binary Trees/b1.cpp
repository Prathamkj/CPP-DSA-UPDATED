// Binary Trees
// Creation of Binary Tree
// including queue for the level order traversal
#include <queue>
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    // Bt Node hai data , left , right
    // constructor to passing all the values
    node(int d) {
        this->data = d;
        // Initially we store value left and right as NULL
        this->left = NULL;
        this->right = NULL;
    }
};

// function to Build the tree
node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }
    // when we enter the data thenn we Assign the data to the left side always first then right side
    cout << "Enter data for inserting in left of " << data << endl;
    // Assigning the Data onto the left
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

// To traverse the tree in level order
void levelOrderTraversal(node* root) {
    // Level order traversal
    queue<node*> q;
    // queue is used to store the nodes of the tree
    q.push(root);
    // pushing the root node into the queue
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}




int main() {
    // Creating the root node
    node* root = NULL;
    // starting me root me null hai

    // creating the tree
    root = buildTree(root);

    // Level order traversal
    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}
