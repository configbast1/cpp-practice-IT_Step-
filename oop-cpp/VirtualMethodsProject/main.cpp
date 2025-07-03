#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251); 

    Figure* figure = nullptr;

    int choice;
    cout << "Выберите фигуру:\n";
    cout << "1 - Прямоугольник\n";
    cout << "2 - Круг\n";
    cout << "3 - Треугольник\n";
    cout << "Ваш выбор: ";
    cin >> choice;

    if (choice == 1) {
        double w, h;
        cout << "Введите ширину: ";
        cin >> w;
        cout << "Введите высоту: ";
        cin >> h;
        figure = new Rectangle(w, h);
    } else if (choice == 2) {
        double r;
        cout << "Введите радиус: ";
        cin >> r;
        figure = new Circle(r);
    } else if (choice == 3) {
        double b, h;
        cout << "Введите основание: ";
        cin >> b;
        cout << "Введите высоту: ";
        cin >> h;
        figure = new Triangle(b, h);
    } else {
        cout << "Неверный выбор.\n";
        return 1;
    }

    cout << "Площадь фигуры: " << figure->GetArea() << endl;

    delete figure;
    return 0;
}
