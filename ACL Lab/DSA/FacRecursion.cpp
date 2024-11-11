#include<iostream>
using namespace std;
int fact(int n)
{
int x,y;
if(n==0){
        return 1;
}
x=n-1;
y=fact(x);
return (n*y);
}
int main(){
        int num;
        cout<<"enter the number for which you want the factorial:"<<endl;
        cin>>num;
        cout<<fact(num);
        return 0;
}