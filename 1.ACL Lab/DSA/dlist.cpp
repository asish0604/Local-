#include<iostream>
using namespace std;
typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}*Dlist;
Dlist getnode(int);
Dlist dll_create();
int dll_isempty(Dlist);
void dll_addtofront(Dlist&,int);
void dll_addtorear(Dlist&,int);
void dll_addtoloc(Dlist&,int,int);
Dlist dll_find(Dlist,int);
void dll_delfront(Dlist&);
void dll_delrear(Dlist&);
void dll_display(Dlist);
Dlist getnode(int val){
        Dlist node=new struct node;
        node->data=val;
        node->prev=NULL;
        node->next=NULL;
        return node;
}
Dlist dll_create(){
        return NULL;
}
int dll_isempty(Dlist l){
        return l==NULL;
}
void dll_addtofront(Dlist& l,int val){
        Dlist node= getnode(val);
        if (dll_isempty(l)){
                l=node;
        }
        else{
                node->next=l;
                l->prev=node;
                l=node;
        }
}
void dll_addtorear(Dlist&l,int val){
        Dlist node=getnode(val);
        if(dll_isempty(l)){
                l=node;
        }
        else{
                Dlist current=l;
                while (current->next!=NULL){
                        current=current->next;
                }
                current->next=node;
                node->prev=current;
        }
}
void dll_addtoloc(Dlist&l,int loc,int val){
        if(loc<=0){
                cout<<"invalid location"<<endl;
                return;
        }
        Dlist node=getnode(val);
        if(loc==1){
                dll_addtofront(l,val);
                return;
        }
        Dlist current=l;
        for(int i=1;i<loc-1&& current!=NULL;i++){
                current=current->next;
        }
        if(current==NULL){
                cout<<"location out of bounds"<<endl;
                return;
        }
        node->next=current->next;
        node->prev=current;
        if(current->next!=NULL){
                current->next->prev=node;
        }
        current->next=node;
}
Dlist dll_find(Dlist l,int val){
        Dlist current=l;
        while(current!=NULL){
                if(current->data==val){
                        return current;
                }
                current=current->next;
        }
        return NULL;
}
void dll_delfront(Dlist&l){
        if(dll_isempty(l)){
                cout<<"List is empty"<<endl;
                return;
        }
        Dlist temp=l;
        l=l->next;
        if(l!=NULL){
                l->prev=NULL;
        }
        delete temp;
}
void dll_delrear(Dlist&l){
        if(dll_isempty(l)){
                cout<<"list is empty"<<endl;
                return;
        }
        Dlist current=l;
        while(current->next!=NULL){
                current=current->next;
        }
        if(current->prev!=NULL){
                current->prev->next=NULL;
        }
        else
        {
                l=NULL;
        }
        delete current;
}
void dll_display(Dlist l){
        if(dll_isempty(l)){
                cout<<"list is empty "<<endl;
                return;
        }
        Dlist current=l;
        while(current!=NULL){
                cout<<current->data<<"\t";
                current=current->next;
        }
        cout<<endl;
}
int main(){
        Dlist l1=dll_create();
        dll_addtofront(l1,1);
        dll_addtofront(l1,100);
        Dlist l2=dll_create();
        dll_addtorear(l2,200);
        dll_addtorear(l2,7);
        cout<<"List 1:\n";
        dll_display(l1);
        cout<<"list 2:\n";
        dll_display(l2);
        dll_delfront(l1);
        cout<<"list 1 after deleting front:\n";
        dll_display(l1);
        dll_delrear(l2);
        cout<<"list 2 after deleting rear:\n";
        dll_display(l2);
        return 0;
}