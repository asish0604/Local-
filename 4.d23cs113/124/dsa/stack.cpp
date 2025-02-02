# include <iostream>
# include "stack.h"
using namespace std;
int TRUE=1;
int FALSE=0;
void init(stack *s){
	s->top=-1;
}
int empty(stack *s){
	if(s->top==-1){
		return TRUE;
	}
	return FALSE;
}
void push(stack *s,int num){
		if(s->top==MAXSIZE-1){
			cout<<"overflow of the stack"<<endl;
			exit (1);
		}
		else 
		{
			s->top++;
			s->data[s->top]=num;
		}
}
int pop(stack *s){
       if(empty(s))
       {
cout<<"stack underflow"<<endl;	 
       
       exit(1);
}
	
return(s->data[s->top--]);
}
int stackTop(stack *s){
return (s->data[s->top]);
}

