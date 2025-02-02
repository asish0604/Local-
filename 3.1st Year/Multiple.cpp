#include<iostream>
using namespace std;

void mult_table();  //Function Decleration
int main ()
{
	int numbers;
	cout<<"How many tables do you need\n";
	cin>>numbers;
	for(int i=0; i<numbers; i++)
	{
	mult_table(); //Function Call
	}
}
void mult_table()
{
	int num;
	 cout<<"Plese enter a number whose table is needed\n";  //Function Defination
	 cin>>num;
	 for(int i=1 ;i<=10;i++)
	 {
	 	cout<<num<<"X"<<i<<"="<<num*i<<endl;
	 }
}

