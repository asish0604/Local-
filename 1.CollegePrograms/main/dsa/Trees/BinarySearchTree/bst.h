#ifndef BST_H  // Include guard to prevent multiple inclusions of this header file
#define BST_H

struct BSTNode {  // Definition of a node in the Binary Search Tree
  BSTNode *right;  // Pointer to the right child node
  int data;  // Data stored in the node
  BSTNode *left;  // Pointer to the left child node
};

typedef struct BSTNode * BST;  // Typedef for a pointer to a BSTNode

// Function prototypes for BST operations
BST addtoTree(BST, int);  // Adds a value to the BST
void preorderTraversal(BST);  // Preorder traversal of the BST
void inorderTraversal(BST);  // Inorder traversal of the BST
void postorderTraversal(BST);  // Postorder traversal of the BST
BST searchTree(BST, int);  // Searches for a value in the BST
BST inorder_successor(BST);  // Finds the inorder successor of a node
BST searchParent(BST, int);  // Finds the parent of a node
void deleteNode(BST, BST);  // Deletes a node from the BST
void destroyTree(BST);  // Destroys the entire BST

#endif  // End of include guard
