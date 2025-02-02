# include <iostream>
# include "stack.h"
int minElement(stack* );
void push(stack *,int);
void pop(stack *,int);
using namespace std;
int main(){
	stack s;
	init(&s);
	stack as;
	init(&as);
        push(&s,1);
	push(&s,2);
	push(&s,10);
	push(&s,12);
	cout<<"the smallest element is "<<getmin(&as)<<endl;
	
