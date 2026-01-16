#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<string> cities;

    cities.push_back("Киев");
    cities.push_back("Львов");
    cities.push_back("Одесса");
    cities.push_back("Харьков");
    cities.push_back("Днепр");

    sort(cities.begin(), cities.end());

    for (vector<string>::iterator it = cities.begin(); it 
        cout << *it << endl;
    }

    string searchCity = "Львов";
    vector<string>::iterator found = find(cities.begin(), cities.end(), searchCity);

    if (found 
        cout << "Город найден: " << *found << endl;
    } else {
        cout << "Город не найден" << endl;
    }

    return 0;
}
