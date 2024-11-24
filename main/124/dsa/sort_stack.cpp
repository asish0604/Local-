# include<iostream>
# include "stack.h"
using namespace std;
void sort(stack &);
int main(){
stack orignal;
stack temp;
push(&orignal,3);
push(&orignal,5);
push(&orignal,8);
push(&orignal,7);
push(&orignal,2);
cout<<"orignal stack"<<endl;
while(!empty(&orignal)){
cout<<stackTop(&orignal)<<endl;
pop(&orignal);
}
sort(stack &orignal);
cout<<"sorted stack"<<endl;
while(!empty(&orignal)){
cout<<stackTop(&orignal)<<endl;
pop(&orignal);
}
return 0;
}
void sort(stack &orignal){
stack temp;
while(!empty(&orignal)){
	int a=stackTop(&orignal);
	pop(&orignal);
}
while(!empty(&temp) && stackTop(&temp)>a){
	push(&orignal,a);
	pop(&temp);
}
push(&temp);
}
while(!empty(&temp)){
	push(&orignal.stackTop(&temp));
	pop(&temp);
}

}
