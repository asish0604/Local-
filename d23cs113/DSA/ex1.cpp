#include<iostream>
using namespace std;

void arr_display(int[], int);
void arr_delfront(int*&, int&);
void arr_addtofront(int*&, int&, int);
void arr_addtorear(int*&, int&, int);
void arr_delrear(int*&, int&);
int arr_search(int[],int size,int element);
void arr_replace(int*& arr,int size,int index,int newElement);

int main() {
    int size;
    int element;
    cout << "How many elements?\n";
    cin >> size;
    int* arr = new int[size];
    cout << "Please enter " << size << " elements now\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Adding elements to the rear
    arr_addtorear(arr, size, 100);
    arr_addtorear(arr, size, 200);
    arr_addtorear(arr, size, 300);

    cout << "Array after adding elements to the rear:" << endl;
    arr_display(arr, size);

    // Adding elements to the front
    arr_addtofront(arr, size, 500);
    arr_addtofront(arr, size, 1000);

    cout << "Array after adding elements to the front:" << endl;
    arr_display(arr, size);

    // Deleting element from the front
    arr_delfront(arr, size);

    cout << "Array after deleting the front element:" << endl;
    arr_display(arr, size);

    // Deleting element from the rear
    arr_delrear(arr, size);

    cout << "Array after deleting the rear element:" << endl;
    arr_display(arr, size);

    //Searching in an Array
	
	cout<<"Enter the Element to Search: "<<endl;
	cin>>element;
	int loc =  arr_search(arr,size,element);
	cout<<loc;
    //Replacing an Element
    int index;
    int newElement;
    //cout<<"Enter the INDEX number if the element to replace: "<<endl;
    index= loc;
    cout<<"Enter the New Element: "<<endl;
    cin>>newElement;
    arr_replace(arr,size,index,newElement);
    arr_display(arr,size);    
    // Cleanup
    delete[] arr;
    return 0;
}

void arr_display(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}

void arr_delfront(int*& arr, int& size) {
    if (size == 0) {
        cout << "Array is empty, nothing to delete from the front." << endl;
        return;
    }
    for (int i = 1; i < size; ++i) {
        arr[i - 1] = arr[i];
    }
    --size;
}

void arr_addtofront(int*& arr, int& size, int value) {
    if (size == 0) {
        arr = new int[1];
        arr[size++] = value;
        return;
    }
    int new_capacity = size + 1;
    int* new_arr = new int[new_capacity];
    new_arr[0] = value;
    for (int i = 0; i < size; ++i) {
        new_arr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
    ++size;
}

void arr_addtorear(int*& arr, int& size, int value) {
    int new_capacity = size + 1;
    int* new_arr = new int[new_capacity];
    for (int i = 0; i < size; ++i) {
        new_arr[i] = arr[i];
    }
    new_arr[size] = value;
    delete[] arr;
    arr = new_arr;
    ++size;
}

void arr_delrear(int*& arr, int& size) {
    if (size == 0) {
        cout << "Array is empty, nothing to delete from the rear." << endl;
        return;
    }
    --size;
    int* new_arr = new int[size];
    for (int i = 0; i < size; ++i) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
}
int arr_search(int arr[],int size,int element)
{
	for(int i=0;i<size;++i)
	{
		if(arr[i]== element)
		{
			return i;
		}
	}
	cout<<"Element Not Found"<<endl;
}
void arr_replace(int*& arr,int size,int index,int newElement)
{
	if(index >=0 && index<size)
	{
		arr[index]= newElement;
	}
	else
	{
		cout<<"Index out of bounds."<<endl;
	}
}
