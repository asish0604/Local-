#include<iostream>
using namespace std;
int main ()
{   
    int x, y;
    cout << "Enter Two Numbers: \n";
    cin >> x >> y;
    int &a = x;
    int &b = y;
    cout << "Address of x: " << &a << endl;
    cout << "Address of y: " << &b << endl;
    return 0;
}

