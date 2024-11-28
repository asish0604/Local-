#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Preorder traversal: Root, Left, Right
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    // Process the current node
    std::cout << "Visiting node with data: " << root->data << " at address: " << root << '\n';

    // Print the current node and its immediate children
    std::cout << "Current node: " << root->data << " at address: " << root << '\n';
    if (root->left != nullptr) {
        std::cout << "Left child: " << root->left->data << " at address: " << root->left << '\n';
    }
    if (root->right != nullptr) {
        std::cout << "Right child: " << root->right->data << " at address: " << root->right << '\n';
    }

    // Traverse the left subtree
    std::cout << "Visiting left subtree of node with data: " << root->data << " at address: " << root << '\n';
    preorderTraversal(root->left);

    // Traverse the right subtree
    std::cout << "Visiting right subtree of node with data: " << root->data << " at address: " << root << '\n';
    preorderTraversal(root->right);
}

// Inorder traversal: Left, Root, Right
void inorderTraversal(TreeNode* root) {
    if (root) {
        // If the current node is not NULL
        inorderTraversal(root->left);
        std::cout << root->data << ' ';
        inorderTraversal(root->right);
    }
}

// Postorder traversal: Left, Right, Root
void postorderTraversal(TreeNode* root) {
    if (root) {
        // If the current node is not NULL
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->data << ' ';
    }
}

// Searches for a value in the BST
TreeNode* searchTree(TreeNode* root, int val) {
    if (root == nullptr) {
        // If the current node is NULL, the value is not found
        return nullptr;
    }
    if (val < root->data) {
        // If the value is less than the current node's data
        return searchTree(root->left, val);
    } else if (val > root->data) {
        // If the value is greater than the current node's data
        return searchTree(root->right, val);
    } else {
        // If the value is equal to the current node's data
        return root;
    }
}

// Destroys the tree and frees memory
void destroyTree(TreeNode* root) {
    if (root) {
        // If the current node is not NULL
        destroyTree(root->left);
        // Recursively destroy the left subtree
        destroyTree(root->right);
        // Recursively destroy the right subtree
        delete root;
    }
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode{1, nullptr, nullptr};
    root->left = new TreeNode{2, nullptr, nullptr};
    root->right = new TreeNode{3, nullptr, nullptr};
    root->left->left = new TreeNode{4, nullptr, nullptr};
    root->left->right = new TreeNode{5, nullptr, nullptr};
    cout<<"PREORDER TRAVERSAL\n"<<endl;
    preorderTraversal(root);  
    cout<<"\n"<<"INORDER TRAVERSAL\n";
    inorderTraversal(root);
    cout<<"\n"<<"\n"<<"POSTORDER TRAVERSAL\n";
    postorderTraversal(root);
    cout<<endl;

    // Clean up memory
    destroyTree(root);

    return 0;
}
/*
Visiting node with data: 1 at address: 0x25239a24120
Current node: 1 at address: 0x25239a24120
Left child: 2 at address: 0x25239a24340
Right child: 3 at address: 0x25239a24400
Visiting left subtree of node with data: 1 at address: 0x25239a24120
#RecursionI
Visiting node with data: 2 at address: 0x25239a24340
Current node: 2 at address: 0x25239a24340
Left child: 4 at address: 0x25239a24360
Right child: 5 at address: 0x25239a241c0
Visiting left subtree of node with data: 2 at address: 0x25239a24340
#RecursionII
Visiting node with data: 4 at address: 0x25239a24360
Current node: 4 at address: 0x25239a24360
Visiting left subtree of node with data: 4 at address: 0x25239a24360
Visiting right subtree of node with data: 4 at address: 0x25239a24360
#RecursionIII
Visiting right subtree of node with data: 2 at address: 0x25239a24340
Visiting node with data: 5 at address: 0x25239a241c0
Current node: 5 at address: 0x25239a241c0
Visiting left subtree of node with data: 5 at address: 0x25239a241c0
Visiting right subtree of node with data: 5 at address: 0x25239a241c0
#RecursionIV
Visiting right subtree of node with data: 1 at address: 0x25239a24120
Visiting node with data: 3 at address: 0x25239a24400
Current node: 3 at address: 0x25239a24400
Visiting left subtree of node with data: 3 at address: 0x25239a24400
Visiting right subtree of node with data: 3 at address: 0x25239a24400
*/ 