#include<iostream>
using namespace std;
typedef struct node //typedef is used for creating aliases
{
    int data;
    struct node* prev;
    struct node* next;
    node()
    {
        int data=10;
        next=nullptr;
        prev=nullptr;
    }
}N;
int main()
{
    N* head =new node();
    cout<<head->data<<endl;
    delete head;
    return 0;
}