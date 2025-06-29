#pragma once
#include <string>
using namespace std;

struct Bus {
    int number;
    string driverName;
    string route;
    int seats;

    Bus(int n = 0, string dn = "", string rt = "", int s = 0)
        : number(n), driverName(dn), route(rt), seats(s) {}
}; 
