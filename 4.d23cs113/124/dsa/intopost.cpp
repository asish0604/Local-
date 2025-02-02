# include <iostream>
#include "stack.h"
#include <string>

using namespace std;
void postfix(const string &infix,&postfix);
int isoperator(char);
int precedence(char);

int main(){
string postfx,infix;
cout<<"please enter a infix expression"<<endl;
cin>>infix;
cout<<"the infix expression is ""<<infix<<endl;
postfix(infix,postfx);
cout<<"the post fix expression is"<<postfx<<endl;


return 0;
}
void postfix(const string &infix,&postfix){
	int inpos=0;
	char symb,topsymb;
	stack s;
	init(&s);
	while (inpos<infix.length())
	{
		symb=infix[inpos++];
		if (symb=='('){
			push(&s,symb);
		}
		else if (symb==')'){
			while((topsymb=pop(&s))!='(')
			{
				postfx=postfx+topsymb;

			}
		}
		else if(isoperator(symb)){
			while(!empty(&s) && (precedence(symb)<=precedence(stacktop(&s))))
			{
				topsymb=pop(&s);
				postfx=postfx+topsymb;
			}
			push(&s,symb);
		}
		else
		{
			 postfx=postfx+symb;
		}
	}
	while(isempty(&s)){
		topsymb=pop(&s);
		postfx=postfx+topsymb;
	}
}
int isoperator(char symb){
if (symb=='$')
	return 3;
if (symb=='*' || symb=='/')
return 2;
if (symb=='-' || symb=='+')
	return 1;

return 0;

}



		
			



