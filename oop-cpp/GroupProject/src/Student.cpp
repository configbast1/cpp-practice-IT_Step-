#include "Student.h"
#include <iostream>
using namespace std;

void copyString(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0' && i < 49) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

Student::Student() {
    copyString(name, "NoName");
    age = 0;
}

Student::Student(const char* name, int age) {
    copyString(this->name, name);
    this->age = age;
}

void Student::setName(const char* name) {
    copyString(this->name, name);
}

void Student::setAge(int age) {
    this->age = age;
}

const char* Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

void Student::print() const {
    cout << "Имя: " << name << ", Возраст: " << age << endl;
}
