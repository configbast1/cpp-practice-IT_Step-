#include "MyString.h"
#include "MyStringHelpers.h"

using namespace std; 

MyString::MyString() {
    str = nullptr;
    length = 0;
}


MyString::MyString(int size) {
    length = size;
    str = new char[length + 1];
    str[0] = '\0';
}
