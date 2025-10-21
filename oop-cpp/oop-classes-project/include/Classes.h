#pragma once
#include <string>

class Student {
public:
    std::string name;
    int age;
    std::string university;
    std::string major;
    double gpa;
};

class Book {
public:
    std::string title;
    std::string author;
    int year;
    std::string publisher;
    int pages;
};

class Firm {
public:
    std::string name;
    std::string industry;
    int employeeCount;
    double revenue;
    std::string location;
};

class Phone {
public:
    std::string brand;
    std::string model;
    std::string os;
    double price;
    int ramGB;
};

class Car {
public:
    std::string make;
    std::string model;
    int year;
    double engineVolume;
    std::string color;
};
