#include<iostream>
using namespace std;
void leap(int a);
void leap(int a)
{
	if((a %4 ==0))
		cout<<a<<" is a leap year\n";
	else
		cout<<a<<" is not a leap year\n";
}
int main ()
{
	int y;
	cout<<"Enter the year\n";
	cin>>y;
	leap(y);
return 0;
}
