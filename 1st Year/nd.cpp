#include<iostream>
using namespace std;
void fac(int);
int main(){
	fac();
	fac();
}
void fac(int n){

	int n,fec=1;
	cout<<"enter the number: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		fec=fec*i;
	}
	cout<<fec;	
}
