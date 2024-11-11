#include<iostream>;
using namespace std;
int main(){
	int n;
	cout<<"enter array size: ";
	cin>>n;
	int arr[n],p=1;
	for (int i=0; i<=n-1;i++){
		cin>>arr[i];
	}
	for (int i=0; i<=n-1;i++){
		cout<<arr[i];
		p=p*arr[i];
	}
	cout<<p<<endl;
}
