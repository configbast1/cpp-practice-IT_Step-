#include "Reservoir.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Reservoir> reservoirs;
    int choice;

    do {
        std::cout << "\n1. Добавить водоем\n2. Удалить водоем\n3. Показать все\n4. Сохранить в файл\n0. Выход\nВаш выбор: ";
        std::cin >> choice;

        if (choice == 1) {
            Reservoir res;
            res.input();
            reservoirs.push_back(res);
        } else if (choice == 2) {
            int idx;
            std::cout << "Введите индекс для удаления: ";
            std::cin >> idx;
            if (idx >= 0 && idx < reservoirs.size()) {
                reservoirs.erase(reservoirs.begin() + idx);
                std::cout << "Удалено.\n";
            }
        } else if (choice == 3) {
            for (size_t i = 0; i < reservoirs.size(); ++i) {
                std::cout << "\n--- Водоем #" << i << " ---\n";
                reservoirs[i].print();
            }
        } else if (choice == 4) {
            for (const auto& res : reservoirs) {
                res.saveToText();
                res.saveToBinary();
            }
            std::cout << "Сохранено.\n";
        }

    } while (choice != 0);

    return 0;
}
