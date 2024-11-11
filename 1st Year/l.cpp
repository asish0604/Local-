#include <iostream>
using namespace std;

typedef struct node {
    struct node* prev;
    int data;
    struct node* next;
}*DList;

DList getnode(int);
DList dll_create();
int dll_isempty(DList);
void dll_addtofront(DList&, int);
void dll_addtorear(DList&, int);
void dll_addtoloc(DList&, int, int);
DList dll_find(DList, int);
void dll_delfront(DList&);
void dll_delrear(DList&);
void dll_display(DList);

DList getnode(int val) {
    DList node = new struct node;
    node->data = val;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

DList dll_create() {
    DList l = NULL;
    return l;
}

int dll_isempty(DList l)
{
    return l == NULL;
}

void dll_addtofront(DList& l, int val) {
    DList node = getnode(val);
    if (dll_isempty(l)) {
        l = node;
    } else {
        node->next = l;
        l->prev = node;
        l = node;
    }
}

void dll_addtorear(DList& l, int val) {
    DList node = getnode(val);
    if (dll_isempty(l)) {
        l = node;
    } else {
        DList current = l;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
        node->prev = current;
    }
}

void dll_addtoloc(DList& l, int loc, int val) {
    if (loc <= 0) {
        cout << "Invalid location" << endl;
        return;
    }
    DList node = getnode(val);
    if (loc == 1) {
        dll_addtofront(l, val);
        return;
    }
    DList current = l;
    for (int i = 1; i < loc - 1 && current != NULL; i++) {
        current = current->next;
    }
    if (current == NULL) {
        cout << "Location out of bounds" << endl;
        return;
    }
    node->next = current->next;
    node->prev = current;
    if (current->next != NULL) {
        current->next->prev = node;
    }
    current->next = node;
}

DList dll_find(DList l, int val) {
    DList current = l;
    while (current != NULL) {
        if (current->data == val) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void dll_delfront(DList& l) {
    if (dll_isempty(l)) {
        cout << "List is empty" << endl;
        return;
    }
    DList temp = l;
    l = l->next;
    if (l != NULL) {
        l->prev = NULL;
    }
    delete temp;
}

void dll_delrear(DList& l) {
    if (dll_isempty(l)) {
        cout << "List is empty" << endl;
        return;
    }
    DList current = l;
    while (current->next != NULL) {
        current = current->next;
    }
    if (current->prev != NULL) {
        current->prev->next = NULL;
    } else {
        l = NULL;
    }
    delete current;
}

void dll_display(DList l) {
    if (dll_isempty(l)) {
        cout << "List is empty" << endl;
        return;
    }
    DList current = l;
    while (current != NULL) {
        cout << current->data << "\t";
        current = current->next;
    }
    cout << endl;
}

int main() {
    DList l1 = dll_create();
    dll_addtofront(l1, 1);
    dll_addtofront(l1, 100);

    DList l2 = dll_create();
    dll_addtorear(l2, 200);
    dll_addtorear(l2, 7);

    cout << "List 1:\n";
    dll_display(l1);
    cout << "List 2:\n";
    dll_display(l2);

    dll_delfront(l1);
    cout << "List 1 after deleting front:\n";
    dll_display(l1);

    dll_delrear(l2);
    cout << "List 2 after deleting rear:\n";
    dll_display(l2);

    return 0;
}