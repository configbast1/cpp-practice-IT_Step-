#include <windows.h>
#include <iostream>
#include "Matrix.h"

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Matrix m(3, 3);
    std::cout << m;

    m.saveToFile("../data/matrix.txt");

    Matrix m2(0, 0);
    m2.loadFromFile("../data/matrix.txt");
    std::cout << "Из файла:" << std::endl;
    std::cout << m2;

    return 0;
}
