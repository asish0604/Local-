#include<iostream>
using namespace std;
int main(){
	int n, factorial=1;
	cout<<"enter the number : ";
	cin>>n;
	if(n<0)
	   cout<<"negative number";
	else if(n<=1)
	   cout<<n<<"! =1 "<<factorial;
	else{
		for(int i=n ; i>=2; i--){
			factorial=factorial*i;
		}
	}
	
}
