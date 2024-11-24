# include <iostream>
# include "stack.h"
using namespace std;
void postfix(const string &infix, string postfix);
int isoperator(char);
int precedence(char);

int main(){
string postfix,infix;
cout<<"please enter a infix expression"<<endl;
cin>>infix;
cout<<"the infix expression is"<<infix<<endl;
postfix(infix,postfix);
cout<<the infix expression is"<<infix<<endl;





return 0;
}
void postfix(const string &infix ,string &postfix){

int inpos=0;
char symb,topsymb;
stack s;
init (&s);
while (inpos<infix.length())
{
symb=infix(inpos++);
if (symb==')')
push (&s,symb);
elseif (symb==')')
{
while ((topsymb=pop(&s))!= '(' )
{
postfix=postfix+topsymb;
}
}
elseif(isoperator(symb)){
while ((
