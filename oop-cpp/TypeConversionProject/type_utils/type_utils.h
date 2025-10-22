#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

namespace type_utils {

template<typename T>
void printTypeName(const T& value);

void printCharFromInt(int number);

}
 
