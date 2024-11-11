#include<iostream>
using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = nullptr;

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}
