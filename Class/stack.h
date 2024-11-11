#ifndef MYSTACK
#define MYSTACK

#include <iostream>
using namespace std;

#define MaxSize 100

struct stack {
    int data[MaxSize];
    int top;
};

// Function declarations
void init(stack* s);
void push(stack* s, int val);
int pop(stack* s);
int stackTop(stack* s);
int stack_empty(stack* s);

// Function definitions
void init(stack* s) {
    s->top = -1;
}

void push(stack* s, int val) {
    if (s->top == MaxSize - 1) {
        cout << "Stack Overflow" << endl;
        return;
    } else {
        s->data[++(s->top)] = val;//we use ++(s->top),because we want to increment the top first and then use it.pre-increment is used here.
    }
}

int pop(stack* s) {
    if (stack_empty(s)) {
        cout << "Stack is empty" << endl;
        return -1; // Return an error value
    }

    return s->data[(s->top)--];//we use (s->top)--, because we want to use the top first and then decrement it.post-decrement is used here.
}

int stackTop(stack* s) {
    if (stack_empty(s)) {
        cout << "Stack is empty" << endl;
        return -1; // Return an error value
    }
    return s->data[s->top];
}

int stack_empty(stack* s) {
    if (s->top == -1) {
        return 1; // Stack is empty
    }
    return 0; // Stack is not empty
}
#endif // MYSTACK