# include <iostream>
using namespace std;
typedef struct node {
	int data;
       struct node * next;
}* list;

list create();
void list_display(list);
void list_addfront(list,int);
void list_addrear(list,int);
list getnode(int);
void delete_front(list);
void delete_rear(list);
list list_find(list,int);
int  list_empty(list);
void list_destory(list);

int list_empty(list l){
if(l->next==NULL)
	return 1;

return 0;
}
list create(){
list temp;
temp=getnode(-1);
return temp;
}
list getnode(int val)
{
	list node=new (struct node);
	node->data=val;
	node->next=NULL;
	return node;
}

void list_addfront(list l,int val)
{
	list node=getnode(val);
	node->next=l->next;
	l->next=node;
	}
void delete_front(list l){
if (list_empty(l))
{	return;
}
list first;
l->next=first->next;
delete first;
}

void list_display(list l){
	if(list_empty(l)){
		cout<<"empty list"<<endl;
		return;
	}
	list current=l->next;
	while(current!=NULL)
	{
		cout<<current->data<<"\t";
		cout<<current->next;
	}
}
void delete_rear(list l){
	if(list_empty(l))
	{return;}
	list current=l->next;
	list previous;
	while(current->next!=NULL){
	previous=current;
	current=current->next;
	}
	delete current;
	previous->next=NULL;
}
void list_addrear(list l,int val){

list node=getnode(val);
list current=l;
	while(current->next!=NULL){
	current=current->next; 
	}
	current->next=node;
}
list list_find(list l,int val){
	list current=l->next;
	while(current!=NULL){
		if(current->data==val){
			return current;
		}
		current=current->next;
	}
	return NULL;
}
void list_destroy(list l){
cout<<"freeing up all dynamic variables"<<endl;
list current,next;
for(current=l; current; current=next)
{
next=current->next;
cout<<"deleting node containing"<<current->data<<endl;
delete current;
}
}
int main(){
        list l=create();
	list_addfront(l,1);
	list_addfront(l,2);
	list_addfront(l,3);
	list_addfront(l,5);
	list_addrear(l,4);
	list_addrear(l,7);
	cout<<"current list"<<endl;
	 list_display(l);
	 list_addrear(l,8);
	  delete_front(l);
	  delete_rear(l);
        list_display(l);
	list_destroy(l);
	return 0;

}


