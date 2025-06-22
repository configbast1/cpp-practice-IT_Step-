#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    FILE* file1;
    FILE* file2;

    char line1[256];
    char line2[256];

    fopen_s(&file1, "file1.txt", "r");
    fopen_s(&file2, "file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Не вдалося відкрити один з файлів.\n");
        return 1;
    }

    int lineNum = 1;
    bool allMatch = true;

    while (!feof(file1) && !feof(file2)) {
        fgets(line1, sizeof(line1), file1);
        fgets(line2, sizeof(line2), file2);

        int i = 0;
        while (line1[i] != '\0' && line2[i] != '\0' && line1[i] == line2[i]) {
            i++;
        }

        if (line1[i] != line2[i]) {
            allMatch = false;
            printf("Рядок %d не збігається:\n", lineNum);
            printf("Файл 1: %s", line1);
            printf("Файл 2: %s\n", line2);
        }

        lineNum++;
    }

    if (!feof(file1) || !feof(file2)) {
        printf("Файли мають різну кількість рядків.\n");
    }

    if (allMatch) {
        printf("Усі рядки збігаються.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
