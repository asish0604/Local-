#include <iostream>
using namespace std;

// Simple node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Insert a value into the tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    
    return root;
}

// Print tree in-order
void printInOrder(Node* root) {
    if (root == nullptr) return;
    
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main() {
    Node* root = nullptr;
    
    // Insert some values
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    root = insert(root, 9);
    
    /* Creates:
           5
          / \
         3   7
        /     \
       1       9
    */
    
    cout << "Tree values in-order: ";
    printInOrder(root);  // Will print: 1 3 5 7 9
    
    return 0;
}