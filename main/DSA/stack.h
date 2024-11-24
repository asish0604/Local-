#ifndef MYSTACK
#define MYSTACK
#define MAX_SIZE 100

struct stack{
        int data[MAX_SIZE];
        int top;
};

void push(stack*,int);
int pop(stack*);
int stackTop(stack *);
int stack_empty(stack*);
void init(stack*);

#endif