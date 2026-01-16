#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime> 
#include <Windows.h>





using namespace std;

int main() {  

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    ofstream fout("cities.txt");

    fout << "Киев\n";
    fout << "Львов\n";
    fout << "Одесса\n";
    fout << "Харьков\n";
    fout << "Днепр\n";
    fout << "Варшава\n";
    fout << "Краков\n";
    fout << "Берлин\n";
    fout << "Прага\n";
    fout << "Париж\n";

    fout.close();

    ifstream fin("cities.txt");

    char cities[10][50];

    for (int i = 0; i < 10; i++) {
        fin.getline(cities[i], 50);
    }

    fin.close();

    srand(time(0));
    int randomIndex = rand() % 10;

    cout << "Случайный город: " << cities[randomIndex] << endl;

    return 0;
}
