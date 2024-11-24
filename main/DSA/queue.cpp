#include<iostream>
using namespace std;
typedef struct Queue
{
	int data;
	int priority;
	struct Queue *node;
}*Queue;
void getnode(int val)
{
	Queue node = new Queue();
	

