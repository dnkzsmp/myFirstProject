#include "readData.h"

void readFile() {
    std::ifstream fileIn;
    fileIn.open("savedDatas.txt");
    if (!fileIn.is_open())
        std::cout << "Error: couldn't open file \"savedDatas.txt\"" << std::endl;
    else {
        std::string stroke;
        while (!fileIn.eof()) {
            stroke = "";
            getline(fileIn, stroke);
            std::cout << stroke << std::endl;
        }
    }
    fileIn.close();
}

void currentCountOfResume() {
    std::cout << "Current count of resume(s): " << &Resume::getCountOfResume << std::endl;
}