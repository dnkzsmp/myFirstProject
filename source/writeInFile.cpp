#include "writeInFile.h"

int startWriteData() {
    int countOfResumes;
    unsigned int countOfTries = 0;
    unsigned int initialAttempts = 5;
    bool isCurrentValue = true;
    while (isCurrentValue) {
    Point:
        if (countOfTries == 5) {
            std::cout << "Program is stop working" << std::endl;
            return 0;
        }
        std::cout << "Count of resume(s): ";
        std::cin >> countOfResumes;
        if (countOfResumes <= 0) {
            countOfTries++;
            initialAttempts--;
            std::cout << "Not current value. Number of attempts: " << initialAttempts << std::endl;
            goto Point;
        } else
            isCurrentValue = false;
    }
    std::vector<std::function<void(Resume &)>> vectorOfFunctions;
    vectorOfFunctions.emplace_back(writeSurnameInFile);
    vectorOfFunctions.emplace_back(writeNameInFile);
    vectorOfFunctions.emplace_back(writeAgeInFile);
    std::vector<Resume> vectorOfResumes(countOfResumes);
    doWriteInFileFunctions(vectorOfFunctions, vectorOfResumes);
}

void writeAgeInFile(Resume &resume) {
    std::string path = "savedDatas.txt";
    std::ofstream fileOut;
    fileOut.open(path, std::ofstream::app);
    if (!fileOut.is_open())
        std::cout << "Error: couldn't open file \"savedDatas.txt\"" << std::endl;
    else {
        resume.setAgeForObject();
        fileOut << "Age: ";
        fileOut << resume.getAge();
        fileOut << "\n<><><><><><><><>\n";
    }
    fileOut.close();
}

void writeNameInFile(Resume &resume) {
    std::string path = "savedDatas.txt";
    std::ofstream fileOut;
    fileOut.open(path, std::ofstream::app);
    if (!fileOut.is_open())
        std::cout << "Error: couldn't open file \"savedDatas.txt\"" << std::endl;
    else {
        resume.setNameForObject();
        fileOut << "Name: ";
        fileOut << resume.getName();
        fileOut << "\n";
    }
    fileOut.close();
}

void writeSurnameInFile(Resume &resume) {
    std::string path = "savedDatas.txt";
    std::ofstream fileOut;
    fileOut.open(path, std::ofstream::app);
    if (!fileOut.is_open())
        std::cout << "Error: couldn't open file \"savedDatas.txt\"" << std::endl;
    else {
        resume.setSurnameForObject();
        fileOut << "Surname: ";
        fileOut << resume.getSurname();
        fileOut << "\n";
    }
    fileOut.close();
}

void doWriteInFileFunctions(std::vector<std::function<void(Resume &)>> &vectorOfFunctions, const std::vector<Resume> &countOfResumes) {
    for (auto el : countOfResumes)
        for (const auto &function : vectorOfFunctions)
            function(el);
}