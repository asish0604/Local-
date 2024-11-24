# include <iostream>
using namespace std;
typedef struct node{
	int data;
	node *left;
	node *right;
}* btree;
void inorderTraversal(btree);
void preorderTraversal(btree);
void postorderTraversal(btree);
btree addtotree(btree,int);
void destroyTree(btree);
btree searchTree(btree,int);
btree inorderSucc(btree);
void deleteNode(btree,btree);
btree searchparent(btree,int);



int main(){
	btree B=NULL,temp;
	int x;
	cout<<"please enter as many elements you want,enter -99 to stop"<<endl;  
	cin>>x;
	while(x!=-99)
	{
		B = addtotree(B,x);
		cin>>x;
	}
cout<<"preorder traversal"<<endl;
preorderTraversal(B);
cout<<"inorder traversal"<<endl;
inorderTraversal(B);
cout<<"postorder traversal"<<endl;
postorderTraversal(B);
cout<<"enter a number whose parent is to be searched"<<endl;
cin>>x;
temp=searchparent(B,x);
if(temp)
	cout<<x<<" 's parent is the node containing the value "<<temp->data<<endl;
else{
	cout<<x<<" 's parent is not found"<<endl;
}
cout<<"please enter a number to be deleted from the tree"<<endl;
cin>>x;
if(temp=searchTree(B,x)){
	deleteNode(B,temp);
	cout<<".....after deltion of x from the current BST"<<endl;
	cout<<"preorder traversal"<<endl;
	preorderTraversal(B);
	cout<<"postorder traversal"<<endl;
	postorderTraversal(B);
	cout<<"inorder traversal"<<endl;
	inorderTraversal(B);
	}
else	
	{
	cout<<"the element is not found"<<endl;
	}
	destroyTree(B);
		
		
	return 0;
}
void preorderTraversal(btree root){
	if(root){
		cout<<root->data<<endl;
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}
void inorderTraversal(btree root){
	if(root){
		inorderTraversal(root->left);
		cout<<root->data<<endl;
		inorderTraversal(root->right);
	}
}
void postorderTraversal(btree root){
	if(root){
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		cout<<root->data<<endl;
	}
}
btree addtotree(btree root, int ele)
{
	if(root==NULL){
		root=new struct node;
		root->data=ele;
		root->left=root->right=NULL;
	}
	else {
		if(ele<root->data){
			root->left=addtotree(root->left,ele);
		}
		else{
	   		root->right=addtotree(root->right,ele);
		}
	}
	return root;
}
btree searchTree(btree root, int ele){
	if(ele<root->data){
		searchTree(root->left,ele);
	}
	else if(ele==root->data){
		return root;
	}
	else {
		searchTree(root->right,ele);
	}
	return NULL;
}
btree inorderSucc(btree root){
	btree temp=root->right;
	if(temp->right){
		while(temp->left){
			temp=temp->left;
		}
	}
	return temp;
}
void destroyTree(btree root){
	if(root){
		destroyTree(root->left);
		destroyTree(root->right);
		delete root;
	}
}
void deleteNode(btree node,btree root){
	btree successor,parent;
	if(node->right==NULL && node->left==NULL){
		parent=searchparent(root,node->data);
		if(parent->left==node){
			parent->left=NULL;
		}
		else{
			parent->right=NULL;
		}
		delete node;
	}
	else if((node->left!=NULL && node->right==NULL) || (node->left==NULL && node->right!=NULL)){
		parent=searchparent(root,node->data);
	        if(parent->right==node){
		       if(node->left==NULL){
			       parent->right=node->right;
		       }
		       else{
			       parent->right=node->left;
		       }
		}
		else {
			if(node->left==NULL){
				parent->left=node->right;
			}
			else{
				parent->left=node->left;
			}
		}

			delete node;
	       }
	       else {
		       successor=inorderSucc(node);
		       parent=searchparent(root,successor->data);

		       node->data=successor->data;
		       deleteNode(parent,successor);
	       }
	
}
btree searchparent(btree root,int ele){
	if(root==NULL || root->data==ele){
		return NULL;
	}
	if((root->left && root->left->data==ele) || (root->right && root->right->data==ele)){
		return root;
	}
	if(ele<root->data){
		return searchparent(root->left,ele);
	}
	else{
		return searchparent(root->right,ele);
	}
}



