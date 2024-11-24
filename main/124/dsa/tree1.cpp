# include <iostream>
using namespace std;
int TRUE=1, FALSE=0;
typedef struct node{
	int data;
	node *left;
	node *right;
}* btree;
Btree addtotree(btree,int);
void preorder_traversel(btree);
void postorder_traversel(btree);
void inorder_traversal(btree);
btree searchtree(btree,int)
btree inorder_succ(btree);
void deletenode(btree,btree);
btree searchparent(btree,int);
void destroytree(btree);

int main(){
	btree B=NULL,temp;
	int x;
	cout<<"please enter as many numbers as you want. Enter -99 to stop"<<endl;
        cin>>x;
	while(x!=-99){
 		addtotree(B,x);
		cin>>x;
		}
	cout<<"preorder traversal"<<endl;
        preorder_traversal(B);
	cout<<"inorder traversal"<<endl;
	inorder_traversal(B);
	cout<<"postorder traversal"<<endl;
	postorder_traversal(B);
	cout<<"please enter an element whose element is to searched"<<endl;
	cin>>x;
	temp=searchparent(B,x);
	if(temp)
	cout<<"the parent is the node containing the data"<<temp->data<<endl;
	else
	cout<<"parent not found"<<endl;	
	cout<<"please enter a element which is to be deleted"<<endl;
	cin>>x;
	if(temp=searchtree(B,x)){
		deletetree(B,temp);
		cout<<"After dletion of x from the BST..."<<endl;
		cout<<"preorder traversal'<<endl;
		pre_ordertraversal(B);
		cout<<"post order traversal"<<endl;
		post_ordertraversal(B);
		cout<<"inorder traversal"<<endl;
		inorder_traversal(B);
	}
	else{
		cout<<"not found in the current btree"<<endl;
	}


	destroytree(B);
	



return 0;
}
btree addtotree(btree root,int val){
if(root==NULL){
	root=new btree;
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
void preorder_traversal(btee){
	if(root){
		cout<<root->data;
		preorder_traversal(root->left);
		preorder_traversal(root->right);
	}
	}
void postorder_traversal(btee){
	if(root){
		postorder_traversal(root->left);
		postorder_traversal(root->right);
		cout<<root->data;
	}
}
void inorder_traversal(btree){
	if(root){
		inorder_traversal(root->left);
		cout<<root->data;
		inorder_traversal(root->right);
	}
}
btree searchtree(btree root,int val){







