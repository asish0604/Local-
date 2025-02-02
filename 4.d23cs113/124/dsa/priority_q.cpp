# include <iostream>
# define TRUE 1
# define FALSE 0
# define MAXSIZE 10

using namespace std;

typedef struct node{
	int data;
	int priority;
	struct node *next;
}*queue;

queue init();
queue getnode(int,int);
void enqueue(queue,int ,int);
int dequeue(queue);
void display(queue);
void destroy(queue);

int main()
{

queue q=init();
enqueue(q,4,3);
enqueue(q,5,6);
enqueue(q,7,2);
enqueue(q,4,7);
enqueue(q,4,5);
display(q);
cout<<dequeue(q)<<endl;
cout<<dequeue(q)<<endl;
cout<<dequeue(q)<<endl;
display(q);
destroy(q);

	return 0;
}
queue init()
{
	queue node=getnode(0,-100);
	return node;
}
queue getnode(int pri,int val){
queue node=new (struct node);
node->priority=pri;
node->data=val;
node->next=NULL;

return node;
}
void enqueue(queue q, int pri,int val)
{
queue node=getnode(pri,val);
queue curr=q->next;
queue prev;
if (q->next==NULL || node->priority > curr->priority)
{
node->next=curr;
q->next=node;
}
else
{
while(curr!=NULL && node->priority <= curr->priority){

		prev=curr;
		curr=curr->next;
		}
prev->next=node;
node->next=curr;
}
}
int dequeue(queue q){
int val;
queue curr=q->next;
if(!(q->next==NULL)){
val=curr->data;
q->next=curr->next;
delete curr;
return val;
}
return 0;
}
void display(queue q){
queue curr=q->next;
cout<<"the contents of the queue is"<<endl;
while(curr!=NULL){
	cout<<curr->data<<"\n";
	curr=curr->next;
}
cout<<endl;
}

void destroy (queue q){
	queue curr,next;
	for(curr=q; curr!=NULL; curr=next){
		next=curr->next;
		cout<<"deleting "<<curr->data<<"\n";
		delete curr;
	}
}
