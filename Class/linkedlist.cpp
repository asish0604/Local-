#include <iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node* prev;
    struct node* next;
    node(int v,struct node* n,struct node* p) 
    {
        data = v;
        next = n;
        prev = p;
    }   
} N;
N* getnode(int val)
{
    return (new N(val,nullptr,nullptr));
}
void addtolist(N* node,int val) 
{
    N* cr = getnode(val); // Use 'N' instead of 'node'
    node->next = cr; // Assign the pointer directly
    cout << cr<<endl;
    cr->prev = node; // Assign the pointer directly
}
void addtofront(N* node,int val)
{
    N* cr = getnode(val);
    cr->next = node; // Assign the pointer directly
    node->prev = cr; // Assign the pointer directly
    cout << cr<<endl;
}
int main() 
{
     N* node = getnode(45);
    addtolist(node,7);
    addtofront(node,89);
    cout << node->data << endl;
    cout << node->next->data << endl;
    cout<<node->next<<endl;
    cout<<node<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<node->data<<endl;
        node=node->next; //didn't understand the first node.
    }
    delete node->next; // Clean up allocated memory
    delete node; // Clean up allocated memory.
    return 0;
}