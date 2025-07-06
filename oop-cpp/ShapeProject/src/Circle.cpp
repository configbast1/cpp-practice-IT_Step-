#include "../include/Circle.h"

Circle::Circle() : x(0), y(0), radius(0) {}

Circle::Circle(int _x, int _y, int _r) : x(_x), y(_y), radius(_r) {}

void Circle::Show() {
    cout << "Круг: центр (" << x << ", " << y << "), радиус = " << radius << endl;
}

void Circle::Save(ofstream& fout) {
    fout << "Circle " << x << " " << y << " " << radius << endl;
}

void Circle::Load(ifstream& fin) {
    fin >> x >> y >> radius;
}

