#ifndef TYPE_UTILS_H
#define TYPE_UTILS_H
#include <iostream>
#include <typeinfo>
namespace ctd {
template<typename T>
void printTypeName(const T& value) {
    std::cout << "Имя типа: " << typeid(value).name() << std::endl;
}
void printCharFromInt(int number);
} 
#endif 
