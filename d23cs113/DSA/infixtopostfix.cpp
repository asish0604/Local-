#include<iostream>
#include<string>
#include"stack.h"

using namespace std;

void postfix(const string &infix, string &postfx);
int isOperator(char);
int precedence(char);

int precedence(char symbol)
{
        if (symbol == '$')
                return 3;
        if (symbol =='*' || symbol == '/' )
                return 2;
        if (symbol == '+' || symbol == '-')
                return 1;
        return 0;
}
int isOperator(char symbol)
{
        return (symbol == '$' || symbol =='*' || symbol == '/' ||symbol == '+' || symbol == '-');
}
void postfix(const string &infix, string &postfx)
{
int inpos=0;
char symb, topsymb;
stack s;
init(&s);
while(inpos<infix.length())
    {
        symb=infix[inpos++];
        if(symb == '(')
                push(&s, symb);
        else if (symb ==')')
        {
                while ((topsymb = pop(&s)) !='(')
                {postfx += topsymb;
                }
        }
        else if (isOperator(symb))
        {
                while(!stack_empty(&s) && (precedence(symb)<=precedence(stackTop(&s))))
                {
                        topsymb=pop(&s);
                        postfx+=topsymb;
                }
        push(&s,symb);
        }
   else
      {
        postfx+=symb;
      }
    }
while(!stack_empty(&s))
      {
        topsymb=pop(&s);
        postfx += topsymb;
      }
}
int main()
{
        string infix,postfx;
        cout<<"please enter an infix expreesion:";
        cin>>infix;
        cout<<"the infix expression is:"<<infix<<endl;
        postfix(infix,postfx);
        cout<<"the postfix expression is :"<<postfx<<endl;
        return 0;
}
