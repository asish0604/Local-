#include<iostream>
#include<string> // Include <string> instead of <cstring>
using namespace std;
typedef struct
{
    string name;
    string numbers;
}
person;
int main()
{
    person people[3];
    people[0].name = "Brian";
    people[0].numbers = "123-456-7890";
    people[1].name = "David";
    people[1].numbers = "234-567-8901";
    people[2].name = "Charles";
    people[2].numbers = "345-678-9012";



    string name;
    cout << "Enter the name to be searched: ";
    cin >> name;
    for(int i = 0; i < 3; i++)
    {
        if(people[i].name.compare(name) == 0) // Use string's compare function
        {
            cout << "Found " << people[i].numbers << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 1;
}