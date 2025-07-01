#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть дві межі діапазону: ";
    cin >> a >> b;

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    cout << "Усі числа: ";
    for (int i = start; i <= end; i++) {
        cout << i << " ";
    }
    cout << endl;

     cout << "Парні числа: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    cout << endl;

    cout << "Непарні числа: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) cout << i << " ";
    }
    cout << endl;

    cout << "Числа кратні семи: ";
    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}
