#include "../include/String.h"
#include <cstring>

String::String() {
    data = new char[1];
    data[0] = '\0';
}

String::String(const char* str) {
    data = new char[strlen(str) + 1];
    strcpy(data, str);
}

String::String(const String& other) {
    data = new char[strlen(other.data) + 1];
    strcpy(data, other.data);
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }
    return *this;
}

int String::length() const {
    return strlen(data);
}

void String::clear() {
    delete[] data;
    data = new char[1];
    data[0] = '\0';
}

String String::operator+(const String& other) const {
    char* newData = new char[strlen(data) + strlen(other.data) + 1];
    strcpy(newData, data);
    strcat(newData, other.data);
    String result(newData);
    delete[] newData;
    return result;
}

String& String::operator+=(const String& other) {
    char* newData = new char[strlen(data) + strlen(other.data) + 1];
    strcpy(newData, data);
    strcat(newData, other.data);
    delete[] data;
    data = newData;
    return *this;
}
