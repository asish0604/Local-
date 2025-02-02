#include<iostream>
using namespace std;
int main ()
{
	int t;
	cout<<"Enter Number of Itterations\n";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int o;
		cout<<"Enter type of Entry\n";
		cin>>o;
		
	if(o==1)
	{
		char o;
		cout<<"Enter Integer";
		cin>>o;
		cout<<static_cast<int>(o)<<"\n";
	}
	
	else if(o==2)
	{
		char x;
		cout<<"Enter a Character\n";
		cin>>x;
		cout<<static_cast<int>(x) << "\n";	
	}
	else
		cout<<"Enter a Valid Number\n";
	}
return 0;
}
