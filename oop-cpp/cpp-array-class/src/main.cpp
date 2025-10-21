#include "Array.h"
#include <iostream>

int main() {
    Array<int> arr;
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);

    std::cout << "Size: " << arr.GetSize() << std::endl;
    std::cout << "Element at index 1: " << arr.GetAt(1) << std::endl;

    arr.SetAt(1, 25);
    std::cout << "Updated element at index 1: " << arr.GetAt(1) << std::endl;

    arr.InsertAt(1, 15);
    std::cout << "Element at index 1 after insertion: " << arr.GetAt(1) << std::endl;

    arr.RemoveAt(2);
    std::cout << "Element at index 2 after removal: " << arr.GetAt(2) << std::endl;

    return 0;
}
