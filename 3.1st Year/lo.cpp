#include<iostream>
using namespace std;
void reverse(int);
int main(){
	int n ;
	cout<<"enter the number: ";
	cin>>n;
	reverse(n);
}
void reverse(int n){
	int x,v=0;
	for(int i=n;i>0;){
		
		x=i%10;
		v=v*10+x;
		i=i/10;
	}
	cout<<v;
}
