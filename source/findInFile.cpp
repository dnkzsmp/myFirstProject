#include "findInFile.h"

void findInFile() {
    FILE *fin;
    fin = fopen("savedDatas.txt", "r");
    if (fin == nullptr)
        std::cout << "Ошибка открытия файла" << std::endl;
    else {
        char ch[3];
        char str[100];
        std::cout << "Введите первые три буквы фамилии: ";
        std::cin >> ch;
        while (!feof(fin)) {
            fgets(str, sizeof(str), fin);
            if (strstr(str, ch)) {
                for (char i : str) {
                    if (i == '\0')
                        break;
                    std::cout << i;
                }
                std::cout << std::endl;
            }
        }
    }
    fclose(fin);
}