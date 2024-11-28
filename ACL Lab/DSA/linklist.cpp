#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node* next;
}*List;

// Function declarations
List getnode(int);
List list_create();
int list_empty(List);
void list_addfront(List, int);
void list_addrear(List, int);
void list_addafter(List, int);
void list_addbefore(List, List, int);
List list_find(List, int);
void list_display(List);
List list_merge(List, List);
List list_copy(List);
void list_delfront(List);
void list_delrear(List);
void list_destroy(List);

// Function definitions
List getnode(int val) {
    List node = new struct node;
    node->data = val;
    node->next = NULL;
    return node;
}

List list_create() {
    List temp = getnode(-1);
    return temp;
}

int list_empty(List l) {
    return l->next == NULL;
}

void list_addfront(List l, int val) {
    cout << "Address of l: " << l << endl;
    cout << "Address of l->next: " << l->next << endl;
    cout << "Value of l->data: " << l->data << endl;
    List node = getnode(val);
    node->next = l->next;
    l->next = node;
}

void list_addrear(List l, int val) {
    List node = getnode(val);
    List current = l;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = node;
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

void list_display(List l) {
    if (list_empty(l)) {
        cout << "empty List\n";
        return;
    }
    List temp = l->next; // Start from the first element
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

void list_delfront(List l) {
    if (list_empty(l)) {
        return;
    }
    List first = l->next;
    l->next = first->next;
    delete first;
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

void list_destroy(List l) {
    cout << "freeing up all dynamic variables\n";
    List current, next;
    for (current = l; current; current = next) {
        next = current->next;
        cout << "deleting node containing " << current->data << "\n";
        delete current;
    }
}

int main() {
    List myList = new struct node;
    myList->next = NULL;

    list_addfront(myList, 10);
    list_addfront(myList, 20);
    list_display(myList);

    list_delfront(myList);
    list_display(myList);

    delete myList;
    return 0;
}
