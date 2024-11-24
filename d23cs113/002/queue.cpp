#include<iostream>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 10
using namespace std;

typedef struct queue{
	int items [MAXSIZE];
	int F,R;
}queue;

int empty (queue *q){
	 if (q->F==-1)
		 return TRUE;
	 return FALSE;
}

void enqueue(queue *q, int ele){
	if ((q->F==0 && q->R==MAXSIZE-1)||(q->F==q->R+1)){
		cout<<"Overflow\n"<<exit;
	}
	if (q->F==-1 && q->R==-1){
		q->F=0;
		q->R=0;
	}else if (q->R==MAXSIZE -1)
		q->R=0;
	else
	       	(q->R)++;
	q->items[q->R] = ele;
}

int dequeue (queue *q){
	int ele;
	if (empty(q)){
		cout<<"Underflow\n";
		exit(1);
	}
	ele= q->items[q->F];
	if (q->F == q->R)
		q->F = q->R = -1;
	else if (q->F == MAXSIZE -1)
		q->F=0;
	else    
		q->F++;
	return ele;
}

void display(queue *q){
	int i;
	if ( !empty(q)){
		cout<<endl;
		for (i=q->F; i!=q->R;  (i++)%MAXSIZE){
			cout<<" "<< q->items[i]<<endl;
                } cout<<" "<<q->items[q->R]<<endl;
	}
}

int main (){
	queue q;
	q.F = q.R = -1;
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	cout<<"After enqueuing:\n";
	display(&q);
	dequeue(&q);
	cout<<"After enqueuing:\n";
	display(&q);
}


