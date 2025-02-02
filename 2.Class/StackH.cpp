#include <iostream>
#include "stack.h"

using namespace std;

void add(stack* s) 
{
    int temp, itt;
    cout << "Enter the Number of Elements to push into the stack" << endl;
    cin >> itt;
    for (int i = 0; i < itt; i++)
    {
        cout << "Enter Element number " << i << endl;
        cin >> temp;
        push(s, temp);
        temp = 0;
    }
}

void del(stack* s)
{
    int itt;
    cout << "Enter the Number of Elements to pull from the stack" << endl;
    cin >> itt;
    for (int i = 0; i < itt; i++)
    {
        cout << pop(s) << " is removed" << endl;
    }
}
void print(stack* s)
{
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->data[i] << " ";
    }
    cout << endl;
}

int main() {
    stack s;
    init(&s);
    while (true) {
        cout << "Enter the type of operation:" << endl;
        cout << "1. Add Elements to the stack" << endl;
        cout << "2. Delete Elements from the stack" << endl;
        cout << "3. Check if stack is empty" << endl;
        cout << "4. Check the top element of the stack" << endl;
        cout<<  "5. Print the stack" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            add(&s);
            break;
        case 2:
            del(&s);
            break;
        case 3: 
            cout << "Is stack empty? " << (stack_empty(&s) ? "Yes" : "No") << endl;
            break;
        case 4:
            cout << "Top element: " << stackTop(&s) << endl;
            break;
        case 5:
            print(&s);
            break;
        case 6:
            cout << "Exiting..." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
    return 0;
}