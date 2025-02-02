#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Please Enter an Integer: ";
	cin>>a;
	for(int i=2;i<=a;)
	{
		if(a%i>0)
			i++;
		else if(a%i==0)
			cout<<a<<" is a Prime Number.";
	}
return 0;
}
