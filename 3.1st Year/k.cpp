#include<iostream>
using namespace std;
int main(){
	int n,rev= 0,rem;
	cout<<"enter the number :";
	cin>>n;
	for(int i=n;i>0;){
		rem=i%10;
		rev +rev*10+rem;
		i=i/10;
		
	}
	cout<<rev;
}
