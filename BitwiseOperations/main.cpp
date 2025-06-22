#include <iostream>
#include <Windows.h>
using namespace std;

const int MAX = 32;

void decimalToBinary(int num, char* result) {
    int i = 0;
    if (num == 0) {
        result[i++] = '0';
    }
    while (num > 0) {
        result[i++] = (num % 2) + '0';
        num /= 2;
    }
    result[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - 1 - j];
        result[i - 1 - j] = temp;
    }
}

void decimalToOctal(int num, char* result) {
    int i = 0;
    if (num == 0) {
        result[i++] = '0';
    }
    while (num > 0) {
        result[i++] = (num % 8) + '0';
        num /= 8;
    }
    result[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - 1 - j];
        result[i - 1 - j] = temp;
    }
}

void decimalToHex(int num, char* result) {
    int i = 0;
    char hexDigits[] = "0123456789ABCDEF";
    if (num == 0) {
        result[i++] = '0';
    }
    while (num > 0) {
        result[i++] = hexDigits[num % 16];
        num /= 16;
    }
    result[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - 1 - j];
        result[i - 1 - j] = temp;
    }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int systemFrom, systemTo;
    int number;
    char result[MAX];

    cout << "Выберите из какой системы перевести. 2-двоичная, 10-десятичная: ";
    cin >> systemFrom;
    cout << "Выберите в какую систему перевести (2, 8, 10, 16): ";
    cin >> systemTo;

    if (systemFrom != 10) {
        cout << "Сейчас поддерживается только перевод из десятичной.\n";
        return 0;
    }

    cout << "Введите число в десятичной системе: ";
    cin >> number;

    if (systemTo == 2) {
        decimalToBinary(number, result);
        cout << "Результат в двоичной системе: " << result << endl;
    }
    else if (systemTo == 8) {
        decimalToOctal(number, result);
        cout << "Результат в восьмеричной системе: " << result << endl;
    }
    else if (systemTo == 10) {
        cout << "Результат в десятичной системе: " << number << endl;
    }
    else if (systemTo == 16) {
        decimalToHex(number, result);
        cout << "Результат в шестнадцатеричной системе: " << result << endl;
    }
    else {
        cout << "Неверный выбор системы.\n";
    }

    return 0;
}
