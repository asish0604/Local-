#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Upper Limit \n";
	cin>>n;
	for (int i = 0; i<n; i++)
		if ((i%i == 0) && (i%2 > 0) && (i%3 > 0) && (i%5 > 0) && (i%7 > 0) && (i%11 > 0))
			cout<<i<<"\n";
return 0;
}

