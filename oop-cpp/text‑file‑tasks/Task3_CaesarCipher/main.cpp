#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string encryptCaesar(const string& text, int shift) {
    string result = text;
    for (size_t i = 0; i < text.size(); ++i) {
        char c = text[i];
        if (isalpha(static_cast<unsigned char>(c))) {
            char base = isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
            result[i] = char((c - base + shift) % 26 + base);
        } else {
            result[i] = c;
        }
    }
    return result;
}

int main() {
    ifstream infile("input.txt");
    ofstream outfile("encrypted.txt");
    if (!infile || !outfile) {
        cout << "Ошибка открытия файлов." << endl;
        return 1;
    }

    int shift;
    cout << "Введите ключ (число): ";
    cin >> shift;

    string line;
    while (getline(infile, line)) {
        string encrypted = encryptCaesar(line, shift);
        outfile << encrypted << endl;
    }

    cout << "Файл зашифрован и сохранён в encrypted.txt" << endl;
    return 0;
}
