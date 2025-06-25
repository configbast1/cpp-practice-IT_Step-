#include <iostream>
#include "include/Fraction.h"
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Fraction f1(3, 4);
    Fraction f2(1, 6);

    cout << "Первые дроби:\n";
    f1.Print();
    f2.Print();

    cout << "\nСложение:\n";
    f1.AddFraction(f2);
    f1.Print();

    cout << "\nУмножение на целое число 3:\n";
    f1.MulInt(3);
    f1.Print();

    cout << "\nВсего создано объектов: " << Fraction::GetCount() << '\n';

    return 0;
}
