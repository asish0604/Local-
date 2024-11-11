#include<iostream>
using namespace std;
void mult_table();
int main()
{
	int numbers;
	cout<<"Enter The Number of Itteration\n";
	cin>>numbers;
	for(int i=0; i<numbers; i++)
  	{
  		mult_table();	
	}
}
void mult_table()
{
	int n1,n2,n3;
	cout<<"Enter Three Numbers\n";
	cin>>n1>>n2>>n3;
	if ((n1 > n2) && (n1 > n3))
    	cout<<n1<<" is the biggest number\n\n";
	else if ((n2 > n1) && (n2 > n3))
    	cout<<n2<<" is the biggest number\n\n";
	else 
    	cout<<n3<<" is the biggest number\n\n"; 
    return ;
}
	   
