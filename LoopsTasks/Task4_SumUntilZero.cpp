#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

 cout << "Вводьте числа (0 для завершення): " << endl;

    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "Сума введених чисел: " << sum << endl;

    return 0;
}
