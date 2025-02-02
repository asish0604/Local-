#include<iostream>
using namespace std;

void mult_table();  //Function Decleration
int main ()
{
	int numbers;
	cout<<"How many Itteration do you need\n";
	cin>>numbers;
	for(int i=0; i<numbers; i++)
	{
	mult_table(); //Function Call
	}
}
void mult_table() //Funtion Defination
{
	int n1,n2,n3;
		cout<<"Please enter any three Numbers\n\n";
		cin>>n1>>n2>>n3;
		if((n1 > n2) && (n1 > n3))
		{
			cout<<n1<<" is the biggest number\n\n";
		}
		else if((n2 > n1) && (n2 > n3))
		{
			cout<<n2<<" is the biigest number\n\n";
		}
		else
		 { 
		 	cout<<n3<<" is the biigest number\n\n";
		 }
}


