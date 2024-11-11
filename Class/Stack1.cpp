#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> Asish;
    Asish.push(12);
    Asish.push(67);
    Asish.push(87);

    cout << Asish.size() << endl; // Print the size of the stack

    // Print and pop elements from the stack
    cout << Asish.top() << endl;
    Asish.pop();
    cout << Asish.top() << endl;
    Asish.pop();
    cout << Asish.top() << endl;
    Asish.pop();

    cout << Asish.size() << endl; // Print the size of the stack after popping all elements

    return 0;
}