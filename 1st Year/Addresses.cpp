#include<iostream>
#include<string> // Add this line to include the string header file
using namespace std;
int main()
{
    string a = "Asish"; 
    string* b = &a; 
    string* c = b; 
    string** d = &b; 
    
    cout << a << " : is the value of a." << endl;
    cout << &a << " : is the address of a." << endl;
    cout << b << " : is the address of a stored inside the pointer." << endl;
    cout << *b << " : is the value inside the pointer." << endl<< endl << endl << endl << endl;
    //cout<<*a<<endl; // This will give an error
   
   
    cout << d << " : is the address of b stored inside the pointer to pointer d." << endl;
    cout << *d << " : is the value inside the pointer to pointer." << endl;
    cout << **d << " : is the value stored at the address pointed by the pointer to pointer." << endl;
    cout << c << " : is the address stored in the pointer c." << endl;
    cout << *c << " : is the value inside the pointer c." << endl<< endl << endl << endl << endl;
    
    
    
    cout << &a[0] << endl; //Incorrect way to print the address of the first character of the string
    for(int i=0;i<a.length();i++)
    {
        cout << static_cast<void*>(&a[i]) << endl; 
    }
    cout << static_cast<void*>(&a[5]) << endl; 
    cout << &a[5] << endl << endl << endl << endl << endl; 
    //cout << static_cast<void*>(&a[0]) << endl;  // Correct way to print the address of the first character of the string


    char* e="Jha"; //This is a C-style string
    cout << e << endl;//This will print the string
    cout << e[0] << endl;//This will print the first character of the string
    cout << static_cast<void*>(&e[0]) << endl;//This will print the address of the first character of the string
    cout<<*(e+1)<<" This will print the second character of the string using pointer arithmetic"<<endl;
    cout<<static_cast<void*>(&e[1])<<endl;//This will print the address of the second character of the string   
    cout<<*(e+2)<<" This will print the third character of the string using pointer arithmetic"<<endl;
    cout<<static_cast<void*>(&e[2])<<endl;//This will print the address of the third character of the string
    return 0;


    int *p;
    p = static_cast<int*>(malloc(sizeof(int))); 
    *p = 5;
    cout << *p << endl;

}
