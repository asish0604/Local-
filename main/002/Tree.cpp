#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

typedef Node* BST;

// Function declarations
BST addtoTree(BST root, int val);
void preorderTraversal(BST root);
void inorderTraversal(BST root);
void postorderTraversal(BST root);
BST searchTree(BST root, int val);
BST inorder_successor(BST node);
BST searchParent(BST root, int val);
void deleteNode(BST &root, int val);
void destroyTree(BST root);

int main() {
    BST root = NULL;
    int val, eletobeSearched, eletobeDeleted;

    cout << "Enter numbers to add to the tree. Enter -99 to stop:\n";
    cin >> val;
    while (val != -99) {
        root = addtoTree(root, val);
        cin >> val;
    }

    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);

    cout << "\nInorder Traversal: ";
    inorderTraversal(root);

    cout << "\nPostorder Traversal: ";
    postorderTraversal(root);

    cout << "\nEnter a number whose parent is to be searched: ";
    cin >> eletobeSearched;
    BST parent = searchParent(root, eletobeSearched);
    if (parent) {
        cout << eletobeSearched << "'s parent is " << parent->data << "\n";
    } else {
        cout << "Parent of " << eletobeSearched << " not found.\n";
    }

    cout << "Enter a number to be deleted from the tree: ";
    cin >> eletobeDeleted;
    deleteNode(root, eletobeDeleted);

    cout << "... After deletion of " << eletobeDeleted << " ...\n";

    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);

    cout << "\nInorder Traversal: ";
    inorderTraversal(root);

    cout << "\nPostorder Traversal: ";
    postorderTraversal(root);

    destroyTree(root);
    return 0;
}

// Function definitions
BST addtoTree(BST root, int val) {
    if (!root) {
        root = new Node{val, NULL, NULL};
    } else if (val < root->data) {
        root->left = addtoTree(root->left, val);
    } else {
        root->right = addtoTree(root->right, val);
    }
    return root;
}

void preorderTraversal(BST root) {
    if (root) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void inorderTraversal(BST root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void postorderTraversal(BST root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

BST searchTree(BST root, int val) {
    if (!root || root->data == val) {
        return root;
    }
    if (val < root->data) {
        return searchTree(root->left, val);
    } else {
        return searchTree(root->right, val);
    }
}

BST inorder_successor(BST node) {
    BST current = node->right;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}

BST searchParent(BST root, int val) {
    if (!root || root->data == val) {
        return NULL;
    }
    if ((root->left && root->left->data == val) || (root->right && root->right->data == val)) {
        return root;
    }
    if (val < root->data) {
        return searchParent(root->left, val);
    } else {
        return searchParent(root->right, val);
    }
}

void deleteNode(BST &root, int val) {
    if (!root) return;

    if (val < root->data) {
        deleteNode(root->left, val);
    } else if (val > root->data) {
        deleteNode(root->right, val);
    } else {
        if (!root->left && !root->right) {  // No children
            delete root;
            root = NULL;
        } else if (!root->left) {  // Only right child
            BST temp = root;
            root = root->right;
            delete temp;
        } else if (!root->right) {  // Only left child
            BST temp = root;
            root = root->left;
            delete temp;
        } else {  // Two children
            BST successor = inorder_successor(root);
            root->data = successor->data;
            deleteNode(root->right, successor->data);
        }
    }
}

void destroyTree(BST root) {
    if (root) {
        destroyTree(root->left);
        destroyTree(root->right);
        delete root;
    }
}

