#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer value for a: ";
    cin >> a;

    // Pointer to an integer
    int *b = &a;

    // Printing the address of a using the pointer b
    cout << "Address of a using pointer b: " << b << "\n";

    // Printing the address of a directly
    cout << "Address of a directly: " << &a << endl;

    // Printing the address of the pointer b
    cout << "Address of pointer b: " << &b << endl;

    // Printing the value stored at the address pointed by b
    cout << "Value at the address pointed by b: " << *b << "\n";

    // Pointer to a pointer
    int **c = &b;

    // Printing the address of b using pointer to pointer c
    cout << "Address of b using pointer to pointer c: " << c << "\n";

    // Printing the address of b directly
    cout << "Address of b directly: " << &b << endl;

    // Printing the value stored at the address pointed by c (which is the address of a)
    cout << "Value at the address pointed by c (address of a): " << *c << "\n";

    // Printing the value stored at the address pointed by the value stored at c (which is the value of a)
    cout << "Value at the address pointed by the value stored at c (value of a): " << **c << "\n";

    // Changing the value of a using pointer b
    *b = 20;
    cout << "New value of a after changing it using pointer b: " << a << "\n";

    // Changing the value of a using pointer to pointer c
    **c = 30;
    cout << "New value of a after changing it using pointer to pointer c: " << a << "\n";

    return 0;
}
