#include "include/Square.h"
#include "include/Rectangle.h"
#include "include/Circle.h"

int main() {
    const int SIZE = 3;
    Shape* shapes[SIZE];

    shapes[0] = new Square(1, 2, 5);
    shapes[1] = new Rectangle(3, 4, 6, 7);
    shapes[2] = new Circle(8, 9, 10); 

    ofstream fout("shapes.txt");
    if (!fout.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    for (int i = 0; i < SIZE; ++i) {
        shapes[i]->Save(fout);
    }
    fout.close();

    for (int i = 0; i < SIZE; ++i) {
        delete shapes[i];
    }

    Shape* loaded[SIZE];
    ifstream fin("shapes.txt");
    if (!fin.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string type;
    for (int i = 0; i < SIZE; ++i) {
        fin >> type;
        if (type == "Square") {
            loaded[i] = new Square();
        } else if (type == "Rectangle") {
            loaded[i] = new Rectangle();
        } else if (type == "Circle") {
            loaded[i] = new Circle();
        } else {
            cout << "Неизвестный тип фигуры!" << endl;
            loaded[i] = nullptr;
        }
        if (loaded[i]) loaded[i]->Load(fin);
    }
    fin.close();

    cout << "Загруженные фигуры:\n";
    for (int i = 0; i < SIZE; ++i) {
        if (loaded[i]) loaded[i]->Show();
    }

    for (int i = 0; i < SIZE; ++i) {
        delete loaded[i];
    }

    return 0;
}
