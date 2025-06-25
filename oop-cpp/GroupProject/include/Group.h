#ifndef GROUP_H
#define GROUP_H

#include "Student.h"

class Group {
private:
    char groupName[50];
    Student* students;
    int count;
    int capacity;

public:
    Group(const char* name);
    ~Group();

    void addStudent(const Student& student);
    void removeStudent(int index);
    void printGroup() const;

    const char* getGroupName() const;
    void setGroupName(const char* name);
};

#endif
