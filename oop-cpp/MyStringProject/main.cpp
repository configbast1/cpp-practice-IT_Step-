#include <iostream>
#include "include/MyString.h"

using namespace std;

int main() {
    MyString s1("Hello");
    cout << "s1: " << s1 << endl; 
    MyString s2 = s1;
    cout << "s2: " << s2 << endl;
    MyString s3 = MyString("World");
    cout << "s3: " << s3 << endl;
