#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node* next;
}*List;

int list_empty(List);
List getnode(int);
List list_find(List, int);
void list_display(List);
void list_addfront(List, int);
void list_delfront(List);
void list_addrear(List, int);
void list_delrear(List);
List list_create();
void list_addafter(List, int);
void list_addbefore(List, List, int);
List list_merge(List, List);
void list_destroy(List);
List list_copy(List);

int list_empty(List l) 
{
    return l->next == NULL;
}

List getnode(int val) 
{
    List node = new struct node;
    node->data = val;
    node->next = NULL;
    return node;
}

void list_addfront(List l, int val) {
    List node = getnode(val);
    node->next = l->next;
    l->next = node;
}

void list_delfront(List l) {
    if (list_empty(l)) {
        return;
    }
    List first = l->next;
    l->next = first->next;
    delete first;
}

void list_display(List l) {
    if (list_empty(l)) {
        cout << "empty List\n";
        return;
    }
    List current = l->next;
    while (current != NULL) {
        cout << current->data << "\t";
        current = current->next;
    }
    cout << endl;
}

void list_delrear(List l) {
    if (list_empty(l)) {
        cout << "empty List";
        return;
    }
    List current = l->next, previous = l;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    delete current;
    previous->next = NULL;
}

void list_addrear(List l, int val) {
    List node = getnode(val);
    List current = l;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = node;
}

List list_find(List l, int val) {
    if (list_empty(l)) {
        cout << "List is empty\n";
        return NULL;
    }
    List current = l->next;
    while (current != NULL) {
        if (current->data == val) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

List list_create() {
    List temp = getnode(-1);
    return temp;
}

void list_addafter(List loc, int ele) {
    if (!loc) {
        cout << "Invalid location" << endl;
        return;
    }
    List node = getnode(ele);
    node->next = loc->next;
    loc->next = node;
}

void list_addbefore(List l, List loc, int ele) {
    if (!loc) {
        cout << "Invalid location" << endl;
        return;
    }
    List current = l;
    while (current->next != loc) {
        current = current->next;
    }
    List node = getnode(ele);
    current->next = node;
    node->next = loc;
}

List list_merge(List l1, List l2) {
    if (list_empty(l1)) return l2;
    if (list_empty(l2)) return l1;

    List merged = list_create();
    List current = l1->next;
    while (current != NULL) {
        list_addrear(merged, current->data);
        current = current->next;
    }

    current = l2->next;
    while (current != NULL) {
        list_addrear(merged, current->data);
        current = current->next;
    }

    return merged;
}

void list_destroy(List l) {
    cout << "freeing up all dynamic variables\n";
    List current, next;
    for (current = l; current; current = next) {
        next = current->next;
        cout << "deleting node containing " << current->data << "\n";
        delete current;
    }
}

List list_copy(List l) {
    if (list_empty(l)) {
        cout << "List is empty\n";
        return NULL;
    }

    List copy = list_create();
    List current = l->next;
    while (current != NULL) {
        list_addrear(copy, current->data);
        current = current->next;
    }

    return copy;
}

int main() {
    List l1 = list_create();
    list_addfront(l1, 1);
    list_addfront(l1, 100);

    List l2 = list_create();
    list_addrear(l2, 200);
    list_addrear(l2, 7);

    cout << "List 1:\n";
    list_display(l1);
    cout << "List 2:\n";
    list_display(l2);

    List merged = list_merge(l1, l2);
    cout << "Merged List:\n";
    list_display(merged);

    List copied = list_copy(merged);
    cout << "Copied List:\n";
    list_display(copied);

    list_destroy(l1);
    list_destroy(l2);
    list_destroy(merged);
    list_destroy(copied);

    cout << "end of program" << endl;

    return 0;
}
