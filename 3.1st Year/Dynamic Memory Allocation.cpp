#include <iostream>

class DynamicArray {
private:
    int* data; // Pointer to dynamically allocated array
    int size; // Size of the array
public:
    // Constructor: Allocates memory for the array 
    DynamicArray(int size) {
        this->size = size;
        data = new int[size]; //Dynamic memory allocation
        std::cout << "Dynamic array of size " << size << " created." << std::endl;
    }
    
    // Destructor: Deallocates memory for the array
    ~DynamicArray() {
        delete[] data;
        std::cout << "Dynamic array destroyed." << std::endl;
    }
    
    // Function to set a value at a specific index in the array
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            std::cerr << "Error: Index out of range." << std::endl;
        }
    }
    
    // Function to get a value from a specific index in the array
    int getValue(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        } else {
            std::cerr << "Error: Index out of range." << std::endl;
            return -1; // Return a default value indicating error
        }
    }
};

int main() {
    // Creating a DynamicArray object
    DynamicArray arr(10);
    
    // Setting values in the array
    for (int i=0; i<10; ++i) {
        arr.setValue(1, 110);
    }
    
    // Getting values from the array and printing them
    std::cout << "Values in the array: ";
    for (int i=0; i<10; ++i) {
        std::cout << arr.getValue(1) << " ";
    }
    std::cout << std::endl;
    
    // DynamicArray object goes out of scope here
    return 0;
    // Destructor of arr will be called automatically, deallocating memory
}
