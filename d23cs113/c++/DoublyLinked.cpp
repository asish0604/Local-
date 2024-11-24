#include <iostream>

using namespace std;

typedef struct node {
    struct node* prev;
    int data;
    struct node* next;
} *Dlist;

Dlist getnode(int data) {
    Dlist newNode = new node;
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Dlist create(int data) {
    Dlist head = getnode(data);
    head->prev = NULL;
    head->next = NULL;
    return head;
}

int empty(Dlist head) {
    return head == NULL;
}

void addfront(Dlist& head, int data) {
    Dlist newNode = getnode(data);
    if (empty(head)) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void addrear(Dlist& head, int data) {
    Dlist newNode = getnode(data);
    if (empty(head)) {
        head = newNode;
    } else {
        Dlist current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void addtoloc(Dlist& head, int data, int loc) {
    if (loc == 1) {
        addfront(head, data);
    } else {
        Dlist current = head;
        for (int i = 1; i < loc - 1; i++) {
            current = current->next;
            if (current == NULL) {
                cout << "Invalid location" << endl;
                return;
            }
        }
        Dlist newNode = getnode(data);
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }
}

Dlist find(Dlist head, int data) {
    if (empty(head)) {
        return NULL;
    }
    Dlist current = head;
    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void delfront(Dlist& head) {
    if (empty(head)) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        Dlist secondNode = head->next;
        secondNode->prev = NULL;
        delete head;
        head = secondNode;
    }
}

void delrear(Dlist& head) {
    if (empty(head)) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        Dlist current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        delete current;
        current->prev->next = NULL;
    }
}

void display(Dlist head) {
    if (empty(head)) {
        cout << "List is empty" << endl;
        return;
    }
    Dlist current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Dlist head = NULL;

    addfront(head, 10);
    addrear(head, 30);
    addtoloc(head, 20, 2);

    display(head);

    Dlist foundNode = find(head, 20);
    if (foundNode != NULL) {
        cout << "Element found at location: " << foundNode->data << endl;
    } else {
        cout << "Element not found" << endl;
    }

   
    delfront(head);
    delrear(head);

    display(head);

    return 0;
}
