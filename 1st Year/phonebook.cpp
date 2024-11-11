#include<iostream>
#include<string> // Include <string> instead of <cstring>
using namespace std;

int main()
{
    string names[] = {"Carter", "David", "john"};
    string numbers[] = {"+91 8970953916", "+12 8970953917", "+1 8970953918"};
    string name;
    cin >> name;
    for(int i = 0; i < 3; i++)
    {
        if(names[i].compare(name) == 0) // Use string's compare function
        {
            cout << "Found " << numbers[i] << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 1;
}