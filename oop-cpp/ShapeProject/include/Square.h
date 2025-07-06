#pragma once
#include "Shape.h"

class Square : public Shape {
private:
    int x, y;
    int side;
public:
    Square();
    Square(int _x, int _y, int _side);

    void Show() override;
    void Save(ofstream& fout) override;
    void Load(ifstream& fin) override;
};
