#include "Resume.h"
#include "readData.h"
#include "writeInFile.h"

void setMenu() {
    std::cout << "1) Enter resume(s) in file\n";
    std::cout << "2) Check base-file\n";
    std::cout << "3) Count of created resume(s)\n";
}

int main() {
    int choiceOfMenu;
    setMenu();
    std::cin >> choiceOfMenu;
    switch (choiceOfMenu) {
        case 1:
            startWriteData();
            std::string(100, '\n');
            break;
        case 2:
            readFile();
            std::string(100, '\n');
            break;
        case 3:
            currentCountOfResume();
            std::string(100, '\n');
            break;
        default:
            break;
    }
}