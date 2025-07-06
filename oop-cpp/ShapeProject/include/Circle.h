#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    int x, y;
    int radius;
public:
    Circle();
    Circle(int _x, int _y, int _r);

    void Show() override;
    void Save(ofstream& fout) override;
    void Load(ifstream& fin) override;
};
