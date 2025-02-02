#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotatearray(int arr[], int n, int k){
	k%=n;
	if(k<0){
	       	k+=n;
	}

	reverse(arr,0, n-1);
	reverse(arr,0, k-1);
	reverse(arr,k, n-1);
}
int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the number of the position to rotate: ";
	cin>>k;
	rotatearray(arr,n,k);
	cout<<"Rotated Array:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;

}

