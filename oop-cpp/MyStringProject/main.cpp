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
    MyString s4 = s1 + s3;
    cout << "s4: " << s4 << endl;
    MyString s5; 
    s5 = s4;
    cout << "s5: " << s5 << endl; 
    MyString s6;
    s6 = MyString("MovedString");
    cout << "s6: " << s6 << endl;
