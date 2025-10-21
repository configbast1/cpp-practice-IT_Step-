#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file1("file1.txt");
    ifstream file2("file2.txt");
    if (!file1 || !file2) {
        cout << "Ошибка открытия файлов." << endl;
        return 1;
    }

    string line1, line2;
    int lineNum = 0;
    bool allEqual = true;

    while (true) {
        bool ok1 = bool(getline(file1, line1));
        bool ok2 = bool(getline(file2, line2));

        if (!ok1 && !ok2) break; // оба файла закончились
        ++lineNum;

        if (!ok1 || !ok2 || line1 != line2) {
            cout << "Несовпадающая строка в файле1, строка " << lineNum << ": " 
                 << (ok1 ? line1 : "<нет строки>") << endl;
            cout << "Несовпадающая строка в файле2, строка " << lineNum << ": "
                 << (ok2 ? line2 : "<нет строки>") << endl;
            allEqual = false;
            break;
        }
    }

    if (allEqual) {
        cout << "Все строки совпадают." << endl;
    }

    return 0;
}
