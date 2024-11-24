#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter the Elements of the array"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int max;
	for(int i=0;i<9;i++)
	{
		if(arr[i]<arr[i+1])
		{
	       		max=arr[i+1];
		}
	}



	cout<<"Elements of the array are: ";
	for(int i;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"The max value is: "<<endl;
	cout<<max;
}

