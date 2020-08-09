#include "Resume.h"
#include "findInFile.h"
#include "readData.h"
#include "writeInFile.h"

void setMenu() {
    std::cout << "1) Enter resume(s) in file\n";
    std::cout << "2) Check base-file\n";
    std::cout << "3) Count of created resume(s)\n";
    std::cout << "4) Find person's resume in file\n";
}

int main() {
    int choiceOfMenu;
Point:
    setMenu();
    std::cin >> choiceOfMenu;
    switch (choiceOfMenu) {
        case 1:
            startWriteData();
            std::string(100, '\n');
            goto Point;
        case 2:
            readFile();
            std::string(100, '\n');
            goto Point;
        case 3:
            currentCountOfResume();
            std::string(100, '\n');
            goto Point;
        case 4:
            findInFile();
            std::string(100, '\n');
            goto Point;
        default:
            break;
    }
}