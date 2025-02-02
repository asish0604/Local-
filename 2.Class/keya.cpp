#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}Pussy;
Pussy getnode(int val){
    Pussy *node=new Pussy();
    node->data=val;
    return node;
}
int main(){
  Pussy* keya=getnode(5);
  Pussy* Asish=getnode(8);
  Asish->prev=keya;
  keya->data=5;
  Asish->data=8;
  keya->next=Asish;
  cout<<Asish<<endl;
  cout<<keya->data<<endl;
  cout<<keya<<endl;
  cout<<keya->next<<endl;
  cout<<Asish->prev<<endl;
}