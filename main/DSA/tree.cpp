#include <iostream>
using namespace std;

BST addtoTree(BST root, int val) {
        if (root == NULL) {
      root = new Node;
      root->data = val;
      root->left = NULL;
      root->right = NULL;
    } else {
      if (val < root->data) {
        root->left = addtoTree(root->left, val);
      } else {
        root->right = addtoTree(root->right, val);
      }
    }
    return root;
  }
  void preorderTraversal(BST root) {
    if (root) {
      cout << root->data << ' ';
      preorderTraversal(root->left);
      preorderTraversal(root->right);
    }
  };
  void inorderTraversal(BST root) {
    if (root) {
      inorderTraversal(root->left);
      cout << root->data << ' ';
      inorderTraversal(root->right);
    }
  };
  void postorderTraversal(BST root) {
    if (root) {
      postorderTraversal(root->left);
      postorderTraversal(root->right);
      cout << root->data << ' ';
    }
  };
  BST searchTree(BST root, int val) {
    if (val < root->data) {
      searchTree(root->left, val);
  } else if (val > root->data) {
    searchTree(root->right, val);
  } else {
    return root;
  }
  return NULL;
};
BST inorder_successor(BST root) {
  BST temp = root->right;
  if (temp->right) {
    while (temp->left) {
      temp = temp->left;
    }
  }
  return temp;
};

/BST searchParent(BST root, int val) {/
/*  BST node, temp1, temp2;*/
/*  node = searchTree(root, val);*/
/*  static BST parent;*/
/*  if (root->data != node->data) {*/
/*    temp1 = root->left;*/
/*    temp2 = root->right;*/
/*    parent = root;*/
/*    if (temp1 && node->data < root->data) {*/
/*      if ((temp1->data) != node->data) {*/
/*        parent = temp1;*/
/*        searchParent(temp1, node->data);*/
/*      } else*/
/*        return parent;*/
/*    } else if (temp2 && node->data >= root->data) {*/
/*      if ((temp2->data) != node->data) {*/
/*        parent = temp2;*/
/*        searchParent(temp2, node->data);*/
/*      } else*/
/*        return parent;*/
/*    } else if (node == root)*/
/*      return NULL;*/
/*  }*/
/*  return parent;*/
/};/

BST searchParent(BST root, int val) {
  if (root == NULL || root->data == val) {
    return NULL;
  }
  if ((root->left && root->left->data == val) ||
      (root->right && root->right->data == val)) {
    return root;
  }
  if (val < root->data) {
    return searchParent(root->left, val);
  } else {
    return searchParent(root->right, val);
  }
}

void deleteNode(BST, BST);
void deleteNode(BST, int);
void destroyTree(BST);

int main() {
  BST root = NULL, searchNode;
  int val, eletobeSearched, eletobeDeleted;
  cout << "\nEnter as many numbers as you want. Enter -99 to stop\n";
  cin >> val;
  while (val != -99) {
    root = addtoTree(root, val);
    cin >> val;
  }
  cout << "\nPreorder Traversal : ";
  preorderTraversal(root);
  cout << "\nInorder Traversal : ";
  inorderTraversal(root);
  cout << "\nPostorder Traversal : ";
  postorderTraversal(root);

  cout << "\nEnter a number whose parent is to be serached\n";
  cin >> eletobeSearched;
  searchNode = searchParent(root, eletobeSearched);
  if (searchNode) {
    cout << eletobeSearched << "'s parent is the node containing "
         << searchNode->data << endl;
  } else {
    cout << eletobeSearched << "'s parent not found\n";
  }

  cout << "Enter a number to be deleted from the tree\n";
  cin >> eletobeDeleted;
  searchNode = searchParent(root, eletobeSearched);
  if (searchNode) {
    deleteNode(root, searchNode);
    cout << "... After deletion of " << eletobeDeleted
         << " from the current BST... \n";

    cout << "\nPreorder Traversal : ";
    preorderTraversal(root);
    cout << "\nInorder Traversal : ";
    inorderTraversal(root);
    cout << "\nPostorder Traversal : ";
    postorderTraversal(root);
  }else{
    cout << eletobeDeleted << " not found in the current BST\n";
  }
  destroyTree(root);
  return 0;
}
