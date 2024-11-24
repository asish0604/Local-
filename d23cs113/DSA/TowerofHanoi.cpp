#include<iostream>
using namespace std;

void tower(int n,char from, char to,char aux){
        if(n==1){
                cout<<"move disk from"<<from<<"to"<<to<<"\n";
        }
        else
        {
                tower(n-1,from,aux,to);
                cout<<"move disk"<<n<<"from"<<from<<"to"<<to<<"\n";
                tower(n-1,aux,to,from);
        }
}
int main(){
        int n;
        cout<<"enter number of disks\n";
        cin>>n;
        tower(n,'A','C','B');
        return 0;
}