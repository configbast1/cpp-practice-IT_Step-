#include "Group.h"
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

Group::Group(const char* name) {
    copyString(groupName, name);
    capacity = 10;
    count = 0;
    students = new Student[capacity];
}

Group::~Group() {
    delete[] students;
}

void Group::addStudent(const Student& student) {
    if (count < capacity) {
        students[count++] = student;
    } else {
        cout << "Группа переполнена!" << endl;
    }
}

void Group::removeStudent(int index) {
    if (index >= 0 && index < count) {
        for (int i = index; i < count - 1; i++) {
            students[i] = students[i + 1];
        }
        count--;
    } else {
        cout << "Некорректный индекс!" << endl;
    }
}

void Group::printGroup() const {
    cout << "Группа: " << groupName << endl;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". ";
        students[i].print();
    }
}

const char* Group::getGroupName() const {
    return groupName;
}

void Group::setGroupName(const char* name) {
    copyString(groupName, name);
}
