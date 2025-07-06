#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Shape {
public:
    virtual void Show() = 0;
    virtual void Save(ofstream& fout) = 0;
    virtual void Load(ifstream& fin) = 0;

    virtual ~Shape() {}
};
