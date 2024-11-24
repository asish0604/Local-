# include <iostream>
using namespace std;
int factorial(int);
int main(){
int n;
cout<<"please enter the number whose factorial is to be calculated"<<endl;
cin>>n;
cout<<"factorial of the given number is \n"<<factorial(n);
return 0;
}
int factorial(int n){
	int x,y;
	if(n==0)
	{
		return 1;
	}
x=(n-1);
y=factorial(x);
return (n*y);
}
