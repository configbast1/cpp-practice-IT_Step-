#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    int x, y;
    int width, height;
public:
    Rectangle();
    Rectangle(int _x, int _y, int _w, int _h);

    void Show() override;
    void Save(ofstream& fout) override;
    void Load(ifstream& fin) override;
};
