include "Reservoir.h"
#include <iostream>

using namespace std;

void copyStr(char* dest, const char* src, int maxLen) {
    int i = 0;
    while (src[i] != '\0' && i < maxLen - 1) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

bool isEqual(const char* a, const char* b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return false;
        i++;
    }
    return a[i] == b[i];
}

Reservoir::Reservoir() {
    name[0] = '\0';
    type[0] = '\0';
    width = length = maxDepth = 0;
}

Reservoir::Reservoir(const char* n, const char* t, double w, double l, double d) {
    copyStr(name, n, NAME_LENGTH);
    copyStr(type, t, TYPE_LENGTH);
    width = w; length = l; maxDepth = d;
}

Reservoir::Reservoir(const Reservoir& other) {
    copyStr(name, other.name, NAME_LENGTH);
    copyStr(type, other.type, TYPE_LENGTH);
    width = other.width; length = other.length; maxDepth = other.maxDepth;
}

Reservoir::~Reservoir() {}
