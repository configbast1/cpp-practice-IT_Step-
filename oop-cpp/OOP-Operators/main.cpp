#include <iostream>
#include "include/Overcoat.h"
#include "include/Flat.h"
using namespace std;

int main() { 
    Overcoat coat1("Пальто", 1500);
    Overcoat coat2("Пальто", 2000);
    cout << "coat1 == coat2: " << (coat1 == coat2) << endl;
    cout << "coat2 > coat1: " << (coat2 > coat1) << endl;
    Overcoat coat3;
    coat3 = coat1;
    coat3.show();

    cout << "---------------------" << endl;

    Flat flat1(60, 50000);
    Flat flat2(70, 60000);
    cout << "flat1 == flat2: " << (flat1 == flat2) << endl;
    cout << "flat2 > flat1: " << (flat2 > flat1) << endl;
    Flat flat3;
    flat3 = flat2;
    flat3.show();

    return 0;
}
