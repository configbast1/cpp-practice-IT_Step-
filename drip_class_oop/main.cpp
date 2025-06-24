#include <iostream>
using namespace std;

class Drip {
private:
    int numerator;
    int denominator;

public:
    void input() {
        cout << "Введите числитель: ";
        cin >> numerator;
        cout << "Введите знаменник: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Ошибка! Знаменник не может быть 0. Установлено 1.\n";
            denominator = 1;
        }
    }

    Drip add(const Drip& b) const {
        Drip result;
        result.numerator = numerator * b.denominator + b.numerator * denominator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Drip subtract(const Drip& b) const {
        Drip result;
        result.numerator = numerator * b.denominator - b.numerator * denominator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Drip multiply(const Drip& b) const {
        Drip result;
        result.numerator = numerator * b.numerator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Drip divide(const Drip& b) const {
        Drip result;
        result.numerator = numerator * b.denominator;
        result.denominator = denominator * b.numerator;
        if (result.denominator == 0) {
            cout << "Ошибка: деление на ноль. Установлено 1.\n";
            result.denominator = 1;
        }
        return result;
    }

    void print() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Drip a, b;
    cout << "Введите первую дробь:\n";
    a.input();
    cout << "Введите вторую дробь:\n";
    b.input();

    cout << "Сумма: "; a.add(b).print(); cout << endl;
    cout << "Разность: "; a.subtract(b).print(); cout << endl;
    cout << "Произведение: "; a.multiply(b).print(); cout << endl;
    cout << "Частное: "; a.divide(b).print(); cout << endl;

    return 0;
}
