# include <iostream>
using namespace std;
int main(){
	int num []={2,8,4,3};
	for(int i=4; i>=0; i--){
		if (num[i]<9){
			num[i]++;
			return;}
		num[i]=0;
	}
	for(int i=0; i<4; i++){
		cout<<num[i];
	}
	cout<<endl;

}
