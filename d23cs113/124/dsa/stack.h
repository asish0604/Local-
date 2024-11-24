# ifndef MY_STACK
# define MY_STACK
# define MAXSIZE 100
typedef struct stack
{
	int data [MAXSIZE];
	int top;
}stack;
void push(stack*,int);
int pop(stack *);
int stackTop(stack *);
int empty(stack*);
void init(stack *);
#endif


