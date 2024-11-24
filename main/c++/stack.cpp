#include<iostream>
#include "stack.h"
using namespace std;

int TRUE=1, FALSE=0;
void init (stack *s){
	s->top == -1;
}

int empty (stack *s){
	if (s->top == -1)
		return TRUE;
       return FALSE;
}

void push(stack *s, int n){
	if (s->top == -1){
		cout<<"Stack Overflow\n";
		exit (1);
	}
	else{
		s->top++;
		s->data [s->top]=n;
	}
}

int pop(stack *s){
	if (empty (s)){
		cout<<"Stack Underflow\n";
		exit (1);
	}
	else{
		return (s-> data [s->top--]);
}
}

int stackTop(stack *s){
	return (s-> data[s->top]);
}

