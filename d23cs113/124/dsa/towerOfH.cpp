# include <iostream>
using namespace std;
void towerOH(int,char,char,char);
int main(){
int n;
cout<<"please enter the number of disc"<<endl;
cin>>n;
towerOH(n,'A','C','B');

	return 0;
}
	
void towerOH(int n,char from,char to,char aux){
	if (n==1)
	{
		cout<<"move disc 1 from"<<from<<"to"<<to<<endl;
	}
		else 
		{	towerOH(n-1,from,aux,to);
			cout<<"move disc"<<n<<"from"<<from<<"to"<<to<<endl;
			towerOH(n-1,aux,to,from);
		}	
}


