#include<iostream>
#include<cmath>
#include"stack.h"
using namespace std;
float eval(string);
float operation(int,float,float);

int main()
{
        string expr;
        cout<<"Enter a postfix expression\n";
        cin>>expr;
        cout<<"the original postfix expression is"<<expr<<endl;
        cout<<"the value of the expression is"<<eval(expr)<<endl;
        return 0;
}

float eval(string expr)
{
        stack s;
        init(&s);
        int c,pos;
        double operand1,operand2,value;
        for(pos=0;pos<expr.size();pos++)
        {
                c=expr[pos];
                if(isdigit(c))
                {
                        push(&s,(float)(c-'0'));
                }
                else
                {
                        operand2=pop(&s);
                        operand1=pop(&s);
                        value=operation(c,operand1,operand2);
                        push(&s,value);
                }
        }
        return (pop(&s));
}

float operation(int symb,float op1,float op2)
{
        switch(symb)
        {
                case'+':return(op1 + op2);
                case'-':return(op1 - op2);
                case '*':return(op1 * op2);
                case'/':return(op1 / op2);
                case'$':return pow(op1,op2);
                default: cout<<"illegal operation\n";
                        exit(1);
        }
}