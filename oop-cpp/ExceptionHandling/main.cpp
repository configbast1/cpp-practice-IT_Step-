#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <windows.h> 

using namespace std;

int toInt(const string& s) {
    istringstream iss(s);
    int result;
    if (!(iss >> result) || !(iss.eof())) {
        throw invalid_argument("Строка не является допустимым числом: " + s);
    }
    return result;
}

void process() {
    try {
        throw;
    } catch (const exception& e) {
        ofstream out("error.log", ios::app);
        if (out.is_open()) {
            out << e.what() << endl;
            out.close();
        }
        MessageBoxA(nullptr, e.what(), "Ошибка", MB_OK | MB_ICONERROR);
        throw;
    }
}

void checkPassword(const string& password) {
    if (password.length() < 8) {
        throw invalid_argument("Пароль должен содержать минимум 8 символов.");
    }

    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }

    if (!hasDigit) {
        throw invalid_argument("Пароль должен содержать хотя бы одну цифру.");
    }
}

class AgeException : public exception {
private:
    int age;
    string message;
public:
    AgeException(int age) : age(age) {
        message = "Возраст слишком мал для голосования: " + to_string(age) + ". Минимум — 18.";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void vote(const string& candidate, int age) {
    if (age < 18) {
        throw AgeException(age);
    }
    string msg = "Вы успешно проголосовали за " + candidate;
    MessageBoxA(nullptr, msg.c_str(), "Голосование", MB_OK);
}

int main() {
    SetConsoleOutputCP(1251); 
    try {
        int number = toInt("12ab");
        cout << "Число: " << number << endl;
    } catch (...) {
        try {
            process();
        } catch (...) {
            cerr << "Ошибка обработана в process()" << endl;
        }
    }

    try {
        checkPassword("abc"); 
    } catch (const exception& e) {
        MessageBoxA(nullptr, e.what(), "Ошибка пароля", MB_OK | MB_ICONWARNING);
    }

    try {
        vote("Иванов", 16); 
    } catch (const AgeException& e) {
        MessageBoxA(nullptr, e.what(), "Ошибка голосования", MB_OK | MB_ICONERROR);
    }

    return 0;
}
