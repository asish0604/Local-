# include <iostream>
using namespace std;
//void mis_ele(int *&,int);
int main(){
	int size;
	cout<<"please enter the size of array"<<endl;
	cin>>size;
	int * arr = new int [size];
	cout<<"please enter the elements in a sequence"<<endl;
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int sum_exp;
	sum_exp=size*(size+1)/2;
        int sum_act=0;
	for(int i=0; i<size; i++)
	{
                sum_act=sum_act+arr[i];
	}
	cout<<"missing number is"<<(sum_exp-sum_act)<<endl;

	return 0;
}
