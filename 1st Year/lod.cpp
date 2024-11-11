#include<iostream>
using namespace std;
void cd(int);
int main(){
	int n,c=0,v;
	cout<<"enter the number: ";
	cin>>n;
	cd(n);
	
}
void cd(int n){
	int v,c=0;
	for(int i=n;i>0;){
		v=i%10;
		i=i/10;
		c++;
	}
	cout<<c;
	
}
