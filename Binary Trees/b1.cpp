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
    //  Pushing Separator / NULL into the queue
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            // it means purana level complete traverse ho gya hai
            // Agar pahela elemeent is NUll tohh Enter maar do
            cout << endl;
            // and if queue is not empty then we again push NULL into the queue
            if(!q.empty()) { 
                //queue still has some child nodes
                q.push(NULL);
            }  
        }
        // if the temp or front element is Not Null 
        // then we print the data of the node
        // and push the left and right child of the node into the queue
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                // if left is not null then we push it into the queue 
                q.push(temp ->left);
            }
            // if right is not null then we push it into the queue
            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

// Inorder Traversal
void inorder(node* root){
    // LNR
    // base case if root is NULL
    if(root == NULL) {
        return;
        // wapas aajao
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    // literallly L N R
}

// Preorder Traversal
void preorder(node* root){
    // NLR
    // base case if root is NULL
    if(root == NULL) {
        return;
        // wapas aajao
    }
    // pahale data print karo
    // Then left and then right
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    // literallly N L R
}

// Postorder Traversal
// L R N
void postorder(node* root){
    // base case if root is NULL
    if(root == NULL) {
        return;
        // wapas aajao
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    // literallly L R N
}


// Here we will build the Tree from Level Order Traversal
void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
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
    // Inorder Traversal
    cout << "Inorder Traversal: " << endl;
    inorder(root);
    cout << endl;
    // Preorder Traversal
    cout << endl << "Preorder Traversal: " << endl;
    preorder(root);
    cout << endl;
    // Postorder Traversal
    cout << endl << "Postorder Traversal: " << endl;
    postorder(root);
    cout << endl;
    // Building the tree from Level Order Traversal
    node* newRoot = NULL;
    buildFromLevelOrder(newRoot);
    cout << "Level order traversal of the new tree: " << endl;
    levelOrderTraversal(newRoot);
    cout << endl;
    return 0;
}
