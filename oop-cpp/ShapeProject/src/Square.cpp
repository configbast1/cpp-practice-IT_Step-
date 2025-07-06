#include "../include/Square.h"

Square::Square() : x(0), y(0), side(0) {}

Square::Square(int _x, int _y, int _side) : x(_x), y(_y), side(_side) {}

void Square::Show() {
    cout << "Квадрат: (" << x << ", " << y << "), сторона = " << side << endl;
}

void Square::Save(ofstream& fout) {
    fout << "Square " << x << " " << y << " " << side << endl;
}

void Square::Load(ifstream& fin) {
    fin >> x >> y >> side;
}
