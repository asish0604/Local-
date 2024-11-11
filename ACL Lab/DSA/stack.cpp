#include<iostream>
#include"stack.h"

using namespace std;

int TRUE=1, FALSE=0;

void init(stack *s){
        s->top=-1;//we declare the stack as empty
}

int stack_empty(stack *s){  
        if(s->top==-1){
                return TRUE;
        }
        return FALSE;
}
void push(stack *s,int val){ //Practice
        if(s->top==MAX_SIZE-1)
        {
                cout<<"Stack ovwerflow";
                exit(1);
        }
        else
        {
                s->top++;
                (s->data[s->top])=val;
        }
}

int pop(stack *s){   //Practice
        if(stack_empty(s)){
                cout<<"Stack is empty";
                exit(1);
        }
        return (s->data[s->top--]);
}

int stackTop(stack *s)  //Practice
{
        if(stack_empty(s)){
                cout<<"Stack is empty";
                exit(1);
        }
        return (s->data[s->top]);
}
