#include<iostream>
using namespace std;
int main ()
{
	int n;
	int m=0;
	int r;
	cout<<"Enter the Number & Range\n";
	cin>>n>>r;
	for (int i=1;i<=r;i++)
	{
		m=n*i;
	    cout<<n<<"x"<<i<<"="<<m<<"\n";
	}
	
}
