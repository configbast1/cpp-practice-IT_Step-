#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
    char name[50];
    int age;

public:
    Student();
    Student(const char* name, int age);
    void setName(const char* name);
    void setAge(int age);
    const char* getName() const;
    int getAge() const;
    void print() const;
};

#endif
