#include<iostream>
#include<stack>
using namespace std;

bool palindrome(int num){
	stack<int> digit;
	int orgNum=num;

	while(num>0){
		digit.push(num%10);
		num/=10;
	}
	int revNum=0;
	int placeVal=1;

	while(!digit.empty()){
		revNum += digit.top()*placeVal;
		digit.pop();
		placeVal*=10;
	}
	return orgNum==revNum;
}
int main(){
	int number;
	cout<<"enter a number: ";
	cin>>number;
	if (palindrome(number)){
		cout<<number<<" is a palindrome\n";
	}
	else cout<<number<<" is not a palindrome\n";
	return 0;
}
