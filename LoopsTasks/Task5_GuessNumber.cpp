#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  
    int secret = rand() % 500 + 1;
    int guess;
    int tries = 0;

    cout << "Вгадай число від 1 до 500! Введіть 0 для виходу." << endl;

    do {
        cout << "Ваша спроба: ";
        cin >> guess;

        if (guess == 0) {
            cout << "Гру завершено користувачем." << endl;
            break;
        }

        tries++;

        if (guess < secret) {
            cout << "Більше!" << endl;
        } else if (guess > secret) {
            cout << "Менше!" << endl;
        } else {
            cout << "Вітаємо! Ви вгадали число!" << endl;
            cout << "Кількість спроб: " << tries << endl;
        }

    } while (guess != secret);

    return 0;
}
