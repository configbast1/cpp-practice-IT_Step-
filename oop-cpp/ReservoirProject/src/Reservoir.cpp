#include "Reservoir.h"

Reservoir::Reservoir() {
    name[0] = '\0';
    type[0] = '\0';
    width = length = maxDepth = 0.0;
}

Reservoir::Reservoir(const char* _name, const char* _type, double _width, double _length, double _maxDepth) {
    for (int i = 0; i < 50; i++) {
        if (_name[i] == '\0') { name[i] = '\0'; break; }
        name[i] = _name[i];
    }
    for (int i = 0; i < 50; i++) {
        if (_type[i] == '\0') { type[i] = '\0'; break; }
        type[i] = _type[i];
    }
    width = _width;
    length = _length;
    maxDepth = _maxDepth;
}

Reservoir::Reservoir(const Reservoir& other) {
    for (int i = 0; i < 50; i++) {
        if (other.name[i] == '\0') { name[i] = '\0'; break; }
        name[i] = other.name[i];
    }
    for (int i = 0; i < 50; i++) {
        if (other.type[i] == '\0') { type[i] = '\0'; break; }
        type[i] = other.type[i];
    }
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

Reservoir::~Reservoir() {}

double Reservoir::getVolume() const {
    return width * length * maxDepth;
}

double Reservoir::getArea() const {
    return width * length;
} 

bool Reservoir::isSameType(const Reservoir& other) const {
    for (int i = 0; i < 50; i++) {
        if (type[i] != other.type[i]) return false;
        if (type[i] == '\0' && other.type[i] == '\0') break;
    }
    return true;
}

int Reservoir::compareArea(const Reservoir& other) const {
    if (!isSameType(other)) return -2;
    if (getArea() > other.getArea()) return 1;
    else if (getArea() < other.getArea()) return -1;
    else return 0;
}

