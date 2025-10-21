#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream infile("input.txt");
    ofstream outfile("stats.txt");
    if (!infile || !outfile) {
        cout << "Ошибка открытия файла." << endl;
        return 1;
    }

    long long charCount = 0;
    long long lineCount = 0;
    long long vowelCount = 0;
    long long consonantCount = 0;
    long long digitCount = 0;

    string line;
    while (getline(infile, line)) {
        ++lineCount;
        for (char c : line) {
            ++charCount;
            if (isdigit(static_cast<unsigned char>(c))) {
                ++digitCount;
            } else if (isalpha(static_cast<unsigned char>(c))) {
                char lower = static_cast<char>(tolower(static_cast<unsigned char>(c)));
                if (string("aeiouy").find(lower) != string::npos) {
                    ++vowelCount;
                } else {
                    ++consonantCount;
                }
            }
        }
    }

    outfile << "Количество символов: " << charCount << endl;
    outfile << "Количество строк: " << lineCount << endl;
    outfile << "Количество гласных букв: " << vowelCount << endl;
    outfile << "Количество согласных букв: " << consonantCount << endl;
    outfile << "Количество цифр: " << digitCount << endl;

    cout << "Статистика записана в файл stats.txt" << endl;
    return 0;
}
