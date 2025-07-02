#include <iostream>
#include "include/Array.h"

using namespace std;

int main() {
    Array<int> arr;
    arr.SetSize(5, 5);
    arr.Add(10);
    arr.Add(20);

    cout << "Size: " << arr.GetSize() << endl;
    cout << "First element: " << arr[0] << endl;

    return 0;
}
