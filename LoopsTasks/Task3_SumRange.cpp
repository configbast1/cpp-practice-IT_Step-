#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть дві межі діапазону: ";
    cin >> a >> b;

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    cout << "Сума чисел діапазону: " << sum << endl;

    return 0;
}
