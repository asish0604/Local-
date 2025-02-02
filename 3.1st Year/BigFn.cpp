#include<iostream>
using namespace std;
int bigfn(int a,int b,int c);
int bigfn(int a,int b,int c)
{
		if((a > b) && (a > c))
		{
			return(a);
		}
		else if((b > a) && (b > c))
		{
			return(b);
		}
		else
		 { 
		 	return(c);
		 } 
}
int main ()
{
	int numbers;
	cout<<"How many Itteration do you need\n";
	cin>>numbers;
	for(int i=0; i<numbers; i++)
	{

	int n1,n2,n3;
		cout<<"Please enter any three Numbers\n\n";
		cin>>n1>>n2>>n3;
		cout<<bigfn(n1,n2,n3)<<" is the biggest number\n";
	}
 return 0;
}
	
		 



