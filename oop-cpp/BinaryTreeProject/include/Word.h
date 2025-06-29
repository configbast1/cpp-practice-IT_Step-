#pragma once
#include <string>
using namespace std;

struct Word {
    string eng;
    string rus;
    int counter;

    Word(string e = "", string r = "", int c = 0) : eng(e), rus(r), counter(c) {}
};
