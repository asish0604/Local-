# define TRUE 1;
# define FALSE 0;
#define MAXSIZE 10;
# include <iostream>
using namespace std;
typedef struct node{
	int data[MAXSIZE];
	int  F,R;
}queue;
void enqueue(queue*,int);
int dequeue(queue*,int);
void display(queue *);
int empty(queue*);
int main(){
queue q;
q.F=q.R=-1;
enqueue(&q,10);
enqueue(&q,20);
display(&q);
dequeue(&q);
display(&q);


return 0;
}

void enqueue(queue *q,int val)
{
	if (q->F==-1 && q->R==-1){
	q->F=0;
	q->R=0;
}
	else if(q->R==MAXSIZE-1){
	q->R=0;
}
	else 
{
	[q->R]++;
        q->items[q->R]=ele;
}
q.R=q.R+1;
q->[items]=ele;
}
int dequeue(queue *q){
	int ele;
	if(empty(q)){
		cout<<"underflow";
		exit 1;
	}
	ele=q->items[q->F];
	if(q->F==q->R){
		q->F=q->R=-1;
	}
	else if (q->F==MAXSIZE-1)
	{
		q->F=0;
	}
	else 
	{
		q->F=F+1;
	}
	return ele;
}
int empty(queue *q){
	if (q->F==-1)

		return TRUE;
		return FALSE;
}
void display(queue*){
	int i;
	if (!empty(q))
	{
	cout<<"\n";
	for( i=q->F; i!=q->R; i=(i+1)%MAXSIZE)
	{
	cout<<q->items[i];
	}	
	}
}

