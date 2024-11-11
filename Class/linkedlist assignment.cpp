#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}*List;


int list_empty(List);
List getnode (int);
List list_find(List,int);
void list_display(List);
void list_addfront(List,int);
void list_delfront(List);
void list_addrear(List,int);
void list_delrear(List);
List list_create();
void list_addafter(List,int );
void list_addbefore(List,List,int);
List list_merge(List,List);
void list_destroy(List);


int list_empty(List l)
{
        if(l->next == NULL)
                return true;
        return false;
}

List getnode (int val)
{
        List node = new (struct node);
        node -> data = val;
        node -> next = NULL;
        return node;
}

void list_addfront(List l ,int val)
{
        List node = getnode(val);
        node ->next = l -> next;
        l ->next =node;
}

void list_delfront(List l)
{
        if(list_empty(l))
        {
                return;
        }

        List first;
        first = l->next;
        l->next = first->next;
        delete first;
}

void list_display(List l)
{
     if (list_empty(l))
             {
                     cout<<"empty List\n";
                     return;
                     }
     List current = l-> next;
     while (current !=NULL)
     {
             cout<<current->data<<"\t";
             current = current -> next;
     }
}

void list_delrear(List l)
{
        if(list_empty(l))
        {
                cout<<"empty List";
                return;
        }

        List current = l->next,previous;
        while (current != NULL)
        {
                previous = current;
                current = current->next;
        }
        delete current;
        previous ->next = NULL;
}

void list_addrear(List l, int val)
{
        List node = getnode(val);
        List current = l->next;
        while (current->next != NULL)
        {
             current = current->next;
        }
        current ->next=node;
}

List list_find (List l,int val)
{
        if(list_empty( l ))
        {
                cout<<"List is empty\n";
                return NULL;
        }
        List current = l->next;
        while (current!=NULL)
        {
                current = current ->next;
                if (current->data==val)
                        return current;
                        current = current->next;
        }
        return NULL;
}


List list_create()
{
        List temp;
        temp = getnode(-1);
        return temp;
}

void list_addafter(List loc,int ele)
{
        if(!loc)
        {
                cout<<"Invalid location"<<endl;
                return;
        }
        List node = getnode(ele);
        node -> next = loc ->next;
        loc->next = node;
}

void list_addbefore(List l,List loc, int ele)
{
        if(loc)
        {
                cout<<"Invalid location"<<endl;
                return;
        }
        List current = l->next;
        while (current ->next != loc)
        {
                current = current->next;
        }
        List node = getnode (ele);
        current->next = node;
        node->next = loc;
}

List list_merge(List l1, List l2)
{
       if (l1->next == nullptr)
               return l2;
       if (l2 ->next == nullptr)
               return l1;

        List current = l1;
        while ( current -> next != nullptr)
                {
                        current = current->next;
                }
        current -> next = l2 ->next;
        return l1;
}

void list_destroy(List l)
{
        cout<<"freeing up all dynamic variables\n";
        List current,next;
        for(current = l; current; current = next)
        {
                next =current ->next;
                cout<< "delleting node containing " <<current ->data<<"\n";
                delete current;
        }
}


int main()
{
        List l = list_create();
        list_addfront(l,1);
        list_addfront(l,100);

        list_addrear(l,200);
        list_addrear(l,7);

        cout<<"Current List\n";
        list_display(l);
        cout<<endl;

        list_destroy(l);
        cout<<endl<<"end of program "<<endl;

        return 0;
}
List list_copy(List l)
{
        if (list_empty(l))
        {
                cout << "List is empty\n";
                return NULL;
        }
        
        List copy = list_create();
        List current = l->next;
        while (current != NULL)
        {
                list_addrear(copy, current->data);
                current = current->next;
        }
        
        return copy;
}

List list_merge(List l1, List l2)
{
        if (list_empty(l1))
                return l2;
        if (list_empty(l2))
                return l1;
        
        List merged = list_create();
        List current = l1->next;
        while (current != NULL)
        {
                list_addrear(merged, current->data);
                current = current->next;
        }
        
        current = l2->next;
        while (current != NULL)
        {
                list_addrear(merged, current->data);
                current = current->next;
        }
        
        return merged;
}
