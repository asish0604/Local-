#include <iostream>

using namespace std;

typedef struct node {
    int data;
    struct node* next;
} *list;

list listCreate();
bool listEmpty(list);
void display(list);
list getNode(int);
void addFront(list, int);
void delFront(list);
void delRear(list);
void addRear(list, int);
void find(list, int);

list listCreate() {
    list headerNode = new node;
    headerNode->data = 0;
    headerNode->next = NULL;
    return headerNode;
}

list getNode(int val) {
    node* newNode = new node; // Corrected line
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void addFront(list l, int val) {
    list node = getNode(val);
    node->next = l->next;
    l->next = node;
}

void addRear(list l, int val) {
    list node = getNode(val);
    list current = l;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = node;
}

bool listEmpty(list l) {
    return l->next == NULL;
}

void delFront(list l) {
    if (listEmpty(l)) {
        cout << "List is empty\n";
        return;
    }
    list firstNode = l->next;
    l->next = firstNode->next;
    delete firstNode;
}

void delRear(list l) {
    if (listEmpty(l)) {
        cout << "List is empty\n";
        return;
    }
    list current = l;
    list prev = l;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    delete current;
}

void destroy(list l) {
    while (l != NULL) {
        list nextNode = l->next;
        delete l;
        l = nextNode;
    }
}

list listMerge(list A, list B) {
    if (listEmpty(A) && listEmpty(B)) {
        cout << "Lists are empty\n";
        return NULL;
    } else if (listEmpty(A)) {
        return B;
    } else if (listEmpty(B)) {
        return A;
    } else {
        list temp = A;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = B->next;
        return A;
    }
}

list copy(list l) {
    if (listEmpty(l)) {
        cout << "List is empty\n";
        return NULL;
    }
    list newHead = getNode(0);
    list current = l->next;
    list temp = newHead;
    while (current != NULL) {
        temp->next = getNode(current->data);
        temp = temp->next;
        current = current->next;
    }
    return newHead;
}

void display(list l) {
    if (listEmpty(l)) {
        cout << "List is empty\n";
        return;
    }
    list current = l->next;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}


int main() {
    list A = listCreate();
    list B = listCreate();

    addRear(A, 1);
    addRear(A, 2);
    addRear(A, 3);

    addRear(B, 4);
    addRear(B, 5);
    addRear(B, 6);

    list mergedList = listMerge(A, B);
    display(mergedList);

    list copiedList = copy(mergedList);
    display(copiedList);

  
    destroy(A);
    destroy(B);
    destroy(mergedList);
    destroy(copiedList);

    return 0;
}
