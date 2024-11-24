# include <iostream>
using namespace std;
int arr_search (int arr[],int size,int element);
void arr_replace(int * &arr,int size,int index,int newelement);
int main()
{
int element;
int newelement;
int index;
//int arr[]={2,4,5,7,9};
int size=5;
int *arr = new int[size];
cout<<"please enter the elements of array"<<endl;
for(int i=0; i<=size; i++)
{
	cin>>arr[i]; 
}
cout<<"please enter the element which you want to search for"<<endl;
cin>>element;
cout<<"the element is present at idex no."<<arr_search(arr,size,element);
cout<<endl;
cout<<"please enter the index no. which do you want to chage"<<endl;
cin>>index;
cout<<"please enter the new element which do you want to insert in array"<<endl;
cin>>newelement;
arr_replace(arr,size,index,newelement);
cout<<"after replacing the given index no. we have the following array"<<endl;
for(int i=0; i<size; i++){
	cout<<arr[i]<<endl;
}
}
int arr_search(int arr[],int size,int element){
for(int i=0;  i<=size; ++i){
if (arr[i]==element){
return i;
}
}
return -1;
}
void arr_replace(int * &arr,int size,int index,int newelement){
	if(index>=0 && index<size) {
		arr[index]=newelement;
}
else {cout<<"array index out of bounds"<<endl;}
}





