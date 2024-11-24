#include<iostream>
#include<stack>
using namespace std;

stack<int> mainStack;
stack<int> minStack;

bool isEmpty(){
	return mainStack.empty();
}

void push(int val){
	mainStack.push(val);
	if(main.empty()||val<=minStack.top()){
		minStack.push(val);
	}

}

void pop(){
	if (mainStack.empty()){
		cout<<"Stack is empty\n";
		return;
	}
	mainstack.pop();
}

int top(){
	if (mainStack.empty()){
		cout<<"stack is empty.\n";
			return ;
	}
	return mainStack.top();
}

int getMin(){
	if (mainStack.empty()){
                cout<<"stack is empty.\n";
                return -1 ;
        }  return minStack.top();
}

int main (){
	push(3);
	push(5);
	cout<<"current minimum:"<<getMin()<<endl;

	push(4);
        push(1);
        cout<<"current minimum:"<<getMin()<<endl;

	pop();
	cout<<"current minimum after popping\n";
	getMin();

	return 0;
}

