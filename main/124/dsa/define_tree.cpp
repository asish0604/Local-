# include <iostream>
using namespace std;
typedef struct node{
	int data;
	node *left;
	node *right;
}* btree;
btree addtotree(btree,int);
void preorder_traversel(btree);
void postorder_traversel(btree);
void inorder_traversel(btree);
btree searchtree(btree,int);
btree inorder_succ(btree);
void deletenode(btree,btree);
btree searchparent(btree,int);
void destroytree(btree);

int main(){
	btree B =NULL;
	btree temp;
	int x;
	cout<<"Enter as many number as you want.Enter -99 to stop"<<endl;
	cin>>x;
	while(x!=-99){
		B=addtotree(B,x);
		cin>>x;
	}
	cout<<"preorder traversal"<<endl;
	preorder_traversel(B);
	cout<<"inorder traversal"<<endl;
	inorder_traversel(B);
	cout<<"post order traversal"<<endl;
	postorder_traversel(B);
	cout<<"enter a value whose parent is to be searched "<<endl;
	cin>>x;
	temp=searchparent(B,x);
	if(temp)
		cout<<x<<"'s parent is the node containing the data" <<temp->data<<endl;
	else
		cout<<x<<"'s parent not found"<<endl;
	cout<<"please enter a number which is to be deleted "<<endl;
	cin>>x;
	if(temp=searchtree(B,x)){
		deleteNode(B,temp);
		cout<<"after deletion of"<<x<<" from the current BST"<<endl;
		cout<<"preorder traversal"<<endl;
		preorder_traversel(B);
		cout<<"inorder traversal"<<endl;
		inorder_traversel(B);
		cout<<"post order traversal"<<endl;
		postorder_traversel(B);
	}
	else 
		cout<<x<<" not found in the current BST"<<endl;
	destroyTree(B);

	
return 0;
}
btree addtotree(btree root,int val)
{
if(root==NULL){
	root=new node();
	root->data=val;
	root->left=root->right=NULL;
}
else {
	if(val<root->data){
		root->left=addtotree(root->left,val);
		}
	else{
		root->right=addtotree(root->right,val);
		}
}
return root;
}
void preorder_traversel(btree root){
	if(root){
		cout<<root->data<<endl;
		preorder_traversel(root->left);
		preorder_traversel(root->right);
	}
	}
void postorder_traversel(btree root){
	if(root){
		postorder_traversel(root->left);
		postorder_traversel(root->right);
		cout<<root->data<<endl;
	}
}
void inorder_traversel(btree root){
	if(root){
		inorder_traversel(root->left);
		cout<<root->data<<endl;
		inorder_traversel(root->right);
	}
}
btree searchtree(btree root, int ele){
	if(ele < root->data)
		searchtree(root->left,ele);
	else if(ele == root->data)
		return root;
	else 
		searchtree(root->right,ele);
	return NULL;
}
btree inorder_succ(btree root){
	btree temp=root->right;
	if(temp->right){
		while(temp->left){
			temp=temp->left;
		}
	}
	return temp; 
}
btree searchparent(btree root, int ele){
	btree node,temp1,temp2;
	if(node==searchtree(root,ele)) {
		static btree parent;
		if(root->data!=node->data) {
			temp1=root->left;
			temp2=root->right;
			parent=root;
		}
	
	if(temp1 && node->data < root->data){
		if (temp1->data != root->data){
			parent=temp1;
			searchparent(temp1,node->data);
		}
		else{
			return parent;
		}
		if(temp2 && node->data>root->data){
			if(temp2->data != root->data){
				parent=temp2;
				searchparent(temp2,node->data);
			}
			else 
				return parent;
		}
		else if(node==root)
			return NULL;
		return parent;
	}
		}
}
void deleteNode(btree root,btree node){
	btree successor,parent;
	if(node->right==NULL && node->left==NULL){
		parent=searchparent(root,node->data);
		if(parent->left==node) parent->left=NULL;
		else parent->right =NULL;
		delete node;
	}

	else if(node->left!=NULL && node->right==NULL || node->right!=NULL && node->left==NULL)
	{
		parent=searchparent(root,node->data);
		if (parent->right==node){
			if (node->left==NULL)
		       		parent->right=node->right;
			else
			       	parent->right=node->left;
		}	
		else {
			if(node->left==NULL) 
				parent->left=node->right;
			else 
				parent->left =node->left;
		}
		delete node;

	}
	else {	
		successor=inorder_succ(node);
		parent=searchparent(root,successor->data);
		node->data=successor->data;
		deleteNode(parent,successor);
	}
}
void destroyTree(btree root)
{
	if (root){
		destroyTree(root->left);
		destroyTree(root->right);
		delete root; 
	}
}

