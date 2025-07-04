#include "ReservoirArray.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ReservoirArray array;

    Reservoir r1("Чорне", "море", 200.0, 300.0, 50.0);
    Reservoir r2("Світязь", "озеро", 100.0, 150.0, 20.0);

    array.add(r1);
    array.add(r2);

    cout << "Всі водойми:" << endl;
    array.showAll();

    cout << "Чи однаковий тип? ";
    cout << (r1.isSameType(r2) ? "Так" : "Ні") << endl;

    cout << "Перша більша за другу? ";
    cout << (r1.isLargerThan(r2) ? "Так" : "Ні") << endl;

    array.saveAllToText("reservoirs.txt");
    array.saveAllToBinary("reservoirs.bin");

    ReservoirArray loadedArray;
    loadedArray.loadAllFromBinary("reservoirs.bin");

    cout << "Прочитано з бінарного файлу:" << endl;
    loadedArray.showAll();

    return 0;
}
