#include <iostream>
#include <Windows.h>
#include "include/Student.h"
#include "include/Group.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Group* group = nullptr;
    int choice;

    do {
        cout << "\n--- МЕНЮ ---\n";
        cout << "1. Создать новую группу\n";
        cout << "2. Добавить студента\n";
        cout << "3. Удалить студента\n";
        cout << "4. Показать студентов группы\n";
        cout << "0. Выход\n";
        cout << "Выбор: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            char name[50];
            cout << "Введите название группы: ";
            cin.getline(name, 50);
            delete group;
            group = new Group(name);
        } else if (choice == 2 && group) {
            char name[50];
            int age;
            cout << "Введите имя студента: ";
            cin.getline(name, 50);
            cout << "Введите возраст: ";
            cin >> age;
            cin.ignore();
            group->addStudent(Student(name, age));
        } else if (choice == 3 && group) {
            int index;
            cout << "Введите номер студента для удаления: ";
            cin >> index;
            cin.ignore();
            group->removeStudent(index - 1);
        } else if (choice == 4 && group) {
            group->printGroup();
        } else if ((choice >= 2 && choice <= 4) && !group) {
            cout << "Сначала создайте группу!\n";
        }

    } while (choice != 0);

    delete group;
    return 0;
}
