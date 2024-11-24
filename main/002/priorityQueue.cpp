#include <iostream>
using namespace std;

#define MAXSIZE 10


struct Node {
    int priority;
    int data;
    Node* next;
};


Node* getnode(int pr, int val) {
    Node* q = new Node();
    q->priority = pr;
    q->data = val;
    q->next = NULL;
    return q;
}


Node* init() {
    return getnode(0, -1);  
}


void enqueue(Node* q, int pr, int val) {
    Node* node = getnode(pr, val);
    Node* curr = q->next; 
    Node* prev = q;       


    while (curr != NULL && node->priority <= curr->priority) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = node;
    node->next = curr;
}


int dequeue(Node* q) {
    if (q->next == NULL) { 
        cout << "Queue is empty. Underflow!" << endl;
        return -1;
    }

    Node* curr = q->next;
    int val = curr->data;  
    q->next = curr->next;   
    delete curr;         
    return val;
}


void display(Node* q) {
    Node* curr = q->next;  
    if (curr == NULL) {
        cout << "Empty Queue" << endl;
        return;
    }
    cout << "Priority Queue:" << endl;
    while (curr != NULL) {
        cout << "Value: " << curr->data << ", Priority: " << curr->priority << endl;
        curr = curr->next;
    }
}

int main() {

    Node* q = init();


    enqueue(q, 4, 10);
    enqueue(q, 3, 20);
    enqueue(q, 4, 30);
    enqueue(q, 1, 40);


    cout << "Queue after enqueues:" << endl;
    display(q);


    cout << "\nDequeued: " << dequeue(q) << endl;


    cout << "\nQueue after dequeue:" << endl;
    display(q);

    return 0;
}

