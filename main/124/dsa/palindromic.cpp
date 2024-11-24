# include <iostream>
# include "stack.h"
using namespace std;
bool is_palindromic(int);

int main(){
	int number;
	cout<<"please enter the number to be checked"<<endl;
	cin>>number;
	if (is_palindromic(number))
		cout<<"the number is palindromic"<<endl;
	else
		cout<<"the number is not palindromic"<<endl;
	return 0;
}
bool is_palindromic(int number){
	stack s;
	init(&s);
	int original = number;
	if (number<0)
	{
		return false;
	}
while(number>0){
	int digit=number%10;
	push(&s,digit);
	number=number/10;
	}
while(!empty(&s)){
	int top_ele=stackTop(&s);
	pop(&s);
		if(top_ele!=original%10)
		{	
			return false;
		}
		original=original/10;
        }
	return true;
}

/*bool is_palindromic(int number){
	stack s;
	init(&s);
	if (number<0)
	{
		return false;
	}
while(number>0){
	int digit=number%10;
	push(&s,digit);
	number=number/10;
	}
while(!empty(&s)){
	int top_ele=stackTop(&s);
	pop(&s);
	if(top_ele!=number%10)
	{	
		return false;
        }
	number=number/10;
        }
	return true;
}*/
