#include<iostream>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 10
using namespace std;
typedef struct node
{
int priority;
int data;
struct node * next;
}* Queue;
Queue init();
void enqueue(Queue, int, int); //1st arg: priority, 2nd arg: data
int dequeue(Queue);
void destroy(Queue);
void display(Queue);
int main()
{
Queue q = init();
enqueue(q,4,10);
enqueue(q,3,20);
enqueue(q,4,70);
enqueue(q,4,30);
display(q);
cout<<dequeue(q)<<endl;
cout<<dequeue(q)<<endl;
cout<<dequeue(q)<<endl;
display(q);
destroy(q);
return 0;
}
Queue getnode(int pri, int val)
{
Queue node = new (struct node);
node->priority = pri;
node->data = val;
node->next = NULL;
return node;
}
Queue init()
{
Queue node = getnode(0,-100);
return node;
}
void enqueue(Queue q, int pri, int val)
{
Queue node = getnode(pri,val);
Queue curr = q->next;
Queue prev;
if(q->next == NULL || node->priority > curr->priority)
{ node->next = curr;
q->next = node;
}
else
{
while(curr!= NULL && node->priority <= curr-
>priority)
{
prev = curr;
curr = curr->next;
}
prev->next = node;
node->next = curr;
}
}
int dequeue(Queue q)
{
int val;
Queue curr = q->next;
if(!(q->next == NULL)) //If queue is NOT empty
{
val = curr->data;
q->next = curr->next;
delete curr;
return val;
}
return 0;
}
void display(Queue q)
{
Queue curr = q->next;
while(curr != NULL)
{
cout<<curr->data<<" ";
curr = curr->next;
}
cout<<"\n";
}
void destroy(Queue q)
{
Queue curr, next;
for(curr = q; curr != NULL; curr= next)
{
next = curr->next;
cout<<"Deleting "<<curr->data<<"\n";
delete curr;
}
}
