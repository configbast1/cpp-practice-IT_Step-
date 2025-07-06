#include "../include/Rectangle.h"

Rectangle::Rectangle() : x(0), y(0), width(0), height(0) {}

Rectangle::Rectangle(int _x, int _y, int _w, int _h)
    : x(_x), y(_y), width(_w), height(_h) {}

void Rectangle::Show() {
    cout << "Прямоугольник: (" << x << ", " << y << "), ширина = "
         << width << ", высота = " << height << endl;
}

void Rectangle::Save(ofstream& fout) {
    fout << "Rectangle " << x << " " << y << " " << width << " " << height << endl;
}

void Rectangle::Load(ifstream& fin) {
    fin >> x >> y >> width >> height;
}
