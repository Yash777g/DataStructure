#include <iostream>
using namespace std;

// it is similar to binary tree but instead binary search tree have:
// all the values to left of root node have less value than root nodes value
// all the values to right of root node have more value than root nodes value
class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode() : data(0), left(nullptr), right(nullptr) {}
        TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
        TreeNode(int data, TreeNode* left, TreeNode* right) : data(0), left(left), right(right) {}

        int miniVal(TreeNode* root);
        int maxVal(TreeNode* root);
        TreeNode* insert(TreeNode* root, int val);
        TreeNode* remove(TreeNode* root, int val);
};

int miniVal(TreeNode* root) {
    TreeNode* temp = root;

    while(!temp->left) {
        temp = temp->left;
    } return temp->data;
}

int maxVal(TreeNode* root) {
    TreeNode* temp = root;

    while(!temp->right) {
        temp = temp->right;
    } return temp->data;
}

TreeNode* TreeNode :: insert(TreeNode* root, int val) {
    if(root == nullptr) {
        TreeNode* node = new TreeNode(val);
        return node;
    }

    if(root->data > val) root->right = insert(root->right, val);
    else root->left = insert(root->left, val);

    return root;
}

TreeNode* TreeNode :: remove(TreeNode* root, int val) {
    if(root == nullptr) return root;

    // node to delete is founded
    if(root->data == val) {
        // node to delete have no child i.e leaf node to delete
        if(!root->left && !root->right) {
            delete root;
            return nullptr;
        } 
        
        // node to delete have only 1 child either left or right 
        // have left child
        if(root->left && !root->right){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }  

        // have right child
        if(!root->left && root->right){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        // node have both left and right child
        if(root->left && root->right) {
            int mini = miniVal(root->right);
            root->data = mini;
            root->right = remove(root->right, mini);
            return root;
        }
    } 
    
    // node to delete is smaller, so traverse left side of binary search tree
    else if(root->data > val) {
        root->left = remove(root->left, val);
        return root;
    } 
    
    // node to delete is greater, so traverse right side of binary search tree
    else {
        root->right = remove(root->right, val);
        return root;
    }
}

int main() {

    return 0;
}