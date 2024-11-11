#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
string trial(string a, string b)
{
	string result;
	result +=a;
	result +=b;
	return result;
}
int main()
{
	int m,x,y;
	string g,h;
	cout<<"Type OF Addition\n";
	cin>>m;
	if(m==1)
	{
			cin>>x>>y;
			cout<<"Sum is  "<<add(x,y);
    }
	if(m==2)
	{
		cout<<"ENTER TWO CHARACTERS\n";
		cin>>g>>h;
		cout<<trial(g,h);
	}
 return 0;
}


