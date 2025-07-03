#include <iostream>
#include <Windows.h>
#include "MyString.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    MyString s1("Привет");
    MyString s2(" Мир!");
    MyString s3 = s1 + s2;

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3 (concat): " << s3 << endl;

    cout << "Длина s3: " << s3.getLength() << endl;

    cout << "s3[0]: " << s3[0] << endl;

    MyString s4;
    cout << "Введите строку: ";
    cin >> s4;
    cout << "Вы ввели: " << s4 << endl;

    return 0;
}
