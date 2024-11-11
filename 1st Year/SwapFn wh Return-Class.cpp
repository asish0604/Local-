#include<iostream>
using namespace std;
int swap(int &a,int &b);
int main ()
{	
	int x,y;
	cout<<"Enter Two Numbers \n";
	cin>>x>>y;
	cout<<"Before Swapping:\n";
	cout<<"1st Number: "<<x<<" \n2nd Number: "<<y<<"\n";
	cout<<swap(x,y);
}
int swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	return(a,b);
}
	

