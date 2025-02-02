#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
    node() {
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
}; // Add semicolon here

int main() {
    int val = 6;
    struct node* head = new node();
    head->data = 5;
    cout << head->data << endl;
    cout << head->next << endl;
    cout << head->prev << endl;
    delete head; // Clean up allocated memory
    return 0;
}