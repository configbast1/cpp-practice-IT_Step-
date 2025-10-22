#include "type_utils.h"
#include <string>
using namespace std;
using namespace type_utils;
int main() {
    int i = 42;
    double d = 3.14;
    string s = "Hello";
    char c = 'A';

    printTypeName(i);
    printTypeName(d);
    printTypeName(s);
    printTypeName(c);

    printCharFromInt(65);
    printCharFromInt(66);

    return 0;
}
