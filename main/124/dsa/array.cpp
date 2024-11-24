# include <iostream>
using namespace std;
void maximum(int *&,int);
int main(){
int size;
cout<<"please enter the size of array"<<endl;
cin>>size;
int * arr= new int [size];
cout<<"please enter which element is the maximum"<<endl;
for(int i=0; i<size; i++){
	cin>>arr[i];
}



}
