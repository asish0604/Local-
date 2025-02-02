
# include <iostream>
# include "stack.h"
using namespace std;
void reverse (string );
int main(){
	string word;
	cout<<"enter a word which is to be reversed"<<endl;
	cin>>word;
	cout<<"the orignal word is "<<word<<endl;
	reverse(word);

	return 0;
}
void reverse(string word )
{
	stack s;
	stack rword;
	char ch;
	for(pos=0; pos<word.size(); pos++)
	{
		ch=pop(&s);		
		push(&rword,ch);
	
	}
	cout<<"reversed name"<<endl;
       while(!empty(&s)){
       cout<<stackTop(&rword);
       pop(&rword);
       }
return;
}

