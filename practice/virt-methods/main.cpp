#include <iostream>
#include <Windows.h>

using namespace std;

class Figure {
public:
    virtual double GetArea() = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double GetArea() override {
        return width * height;
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double GetArea() override {
        return 3.14 * radius * radius;
    }
};

class Triangle : public Figure {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double GetArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    SetConsoleOutputCP(1251);

    int выбор;
    Figure* фигура = nullptr;

    cout << "Выберите фигуру:\n1. Прямоугольник\n2. Круг\n3. Треугольник\nВаш выбор: ";
    cin >> выбор;

    if (выбор == 1) {
        double ширина, высота;
        cout << "Введите ширину и высоту: ";
        cin >> ширина >> высота;
        фигура = new Rectangle(ширина, высота);
    } else if (выбор == 2) {
        double радиус;
        cout << "Введите радиус: ";
        cin >> радиус;
        фигура = new Circle(радиус);
    } else if (выбор == 3) {
        double основание, высота;
        cout << "Введите основание и высоту: ";
        cin >> основание >> высота;
        фигура = new Triangle(основание, высота);
    } else {
        cout << "Неверный выбор.\n";
    }

    if (фигура != nullptr) {
        cout << "Площадь фигуры: " << фигура->GetArea() << endl;
        delete фигура;
    }

    return 0;
}
