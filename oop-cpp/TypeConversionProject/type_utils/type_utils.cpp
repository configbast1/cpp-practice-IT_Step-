#include "type_utils.h"

using namespace std;
namespace type_utils {

template<typename T>
void printTypeName(const T& value) {
    cout << "Type: " << typeid(value).name() << endl;
}
template void printTypeName<int>(const int&);
template void printTypeName<double>(const double&);
template void printTypeName<char>(const char&);
template void printTypeName<string>(const string&);

void printCharFromInt(int number) {
    char c = *reinterpret_cast<char*>(&number);
    cout << "Char from int (" << number << "): " << c << endl;
}

}
