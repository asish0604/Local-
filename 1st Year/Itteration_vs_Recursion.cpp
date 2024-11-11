#include<iostream>
using namespace std;

/**
 * Draws a pyramid of '#' characters using iteration.
 * 
 * @param n The number of rows in the pyramid.
 */
void Idraw(int n)
{
    for (int i=0;i<n;i++) // Iterate through each row
    {
        for(int j=0;j<i+1;j++) // Iterate through each column in the row
        {
            cout<<"#"; // Print '#' character
        }
        cout<<"\n"; // Move to the next line
    }
}

/**
 * Draws a pyramid of '#' characters using recursion.
 * 
 * @param n The number of rows in the pyramid.
 */
void Rdraw(int n)
{
    if (n <= 0) { // Base case: Stop recursion when n becomes less than or equal to 0
        return;
    }
    Rdraw(n - 1); // Recursively call Rdraw with n-1 to draw the pyramid with n-1 rows
    for(int i=0;i<n;i++) // Iterate through each column in the row
    {
        cout<<"#"; // Print '#' character
    }
    cout<<"\n"; // Move to the next line
}

int main()
{
    int h;
    cout<<"Enter the height of the pyramid: ";
    cin>>h;
    Idraw(h); // Call Idraw function to draw the pyramid using iteration
    Rdraw(h); // Call Rdraw function to draw the pyramid using recursion
}
