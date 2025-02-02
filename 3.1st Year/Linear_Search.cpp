#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
void inputArray(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

template<typename T>
int Search(T arr[], int size) {
    cout << "Enter the element to be searched: ";
    T n;
    cin >> n;
    for(int i = 0; i < size; i++) {
        if(arr[i] == n) {
            cout << "Found: " << n << endl;
            return 0;
        }
    }
    cout << n << "\t" << "Not Found" << endl;
    return 1;   
}

int main() {
    const int size = 5;
    float e[size];
    string s[size];

    cout << "Enter 5 Numbers: ";
    inputArray(e, size); // Input for float array
    if (Search(e, size) == 0) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}
