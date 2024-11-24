#include <iostream>

using namespace std;

int searchElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}

void replaceElement(int arr[], int n, int old_value, int new_value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == old_value) {
            arr[i] = new_value;
            break;  
	}
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, old_value, new_value;

    cout << "Enter the element to search: ";
    cin >> x;

    int index = searchElement(arr, n, x);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    cout << "Enter the old value to replace: ";
    cin >> old_value;

    cout << "Enter the new value: ";
    cin >> new_value;

    replaceElement(arr, n, old_value, new_value);

    cout << "Array after replacement: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
