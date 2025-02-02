# include <iostream>
# include "stack.h"
# include <cmath>
using namespace std;
float eval(string );
float operation(int,float,float);
int main(){
	string expr;
	cout<<"enter a post fix expression"<<endl;
	cin>>expr;
	cout<<"the orignal post fix exoression is "<<expr<<endl;
	cout<<"the value of the expression is "<<eval(expr)<<endl;

	return 0;
}

float eval(string expr)
{
	stack s;
	init(&s);
	int c,pos;
	double op1,op2,value;
	for(pos=0; pos<expr.size(); pos++)
	{
		c=expr[pos];
		if(isdigit(c))
		{
			push(&s,(float)(c-'0'));
		}
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			value=operation(c,op1,op2);
			push(&s,value);
		}
	}
	return(pop(&s));
}
float operation(int symb, float op1,float op2)
{
	switch(symb)
	{
		case '+' : return(op1+op2);
		case '-' : return(op1-op2);
		case '*' : return(op1*op2);
		case '/' : return (op1/op2);
		case '$' : return pow(op1,op2);
	       default : cout<<"illegal operation"<<endl;
 exit(1);
	}
}	
