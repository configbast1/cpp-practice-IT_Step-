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

void Reservoir::setName(const char* n) { copyStr(name, n, NAME_LENGTH); }
void Reservoir::setType(const char* t) { copyStr(type, t, TYPE_LENGTH); }
void Reservoir::setDimensions(double w, double l, double d) {
    width = w; length = l; maxDepth = d;
}

const char* Reservoir::getName() const { return name; }
const char* Reservoir::getType() const { return type; }
double Reservoir::getWidth() const { return width; }
double Reservoir::getLength() const { return length; }
double Reservoir::getMaxDepth() const { return maxDepth; }

double Reservoir::getVolume() const { return width * length * maxDepth; }
double Reservoir::getSurfaceArea() const { return width * length; }

bool Reservoir::isSameType(const Reservoir& other) const {
    return isEqual(type, other.type);
}

bool Reservoir::isLargerThan(const Reservoir& other) const {
    if (isSameType(other))
        return getSurfaceArea() > other.getSurfaceArea();
    return false;
}

void Reservoir::show() const {
    cout << "Назва: " << name << endl;
    cout << "Тип: " << type << endl;
    cout << "Ширина: " << width << " Довжина: " << length << " Макс. глибина: " << maxDepth << endl;
    cout << "Площа: " << getSurfaceArea() << " Обсяг: " << getVolume() << endl;
}

void Reservoir::saveToTextFile(FILE* f) const {
    fprintf(f, "%s %s %.2f %.2f %.2f\n", name, type, width, length, maxDepth);
}

void Reservoir::saveToBinaryFile(FILE* f) const {
    fwrite(this, sizeof(Reservoir), 1, f);
}

void Reservoir::loadFromBinaryFile(FILE* f) {
    fread(this, sizeof(Reservoir), 1, f);
}
