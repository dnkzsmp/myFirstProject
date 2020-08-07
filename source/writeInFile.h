#ifndef MYLESSONS_WRITEINFILE_H
#define MYLESSONS_WRITEINFILE_H
#include "Resume.h"
#include <fstream>
#include <functional>
#include <iostream>
#include <vector>

int startWriteData();
void writeAgeInFile(Resume &resume);
void writeNameInFile(Resume &resume);
void writeSurnameInFile(Resume &resume);
void doWriteInFileFunctions(std::vector<std::function<void(Resume &)>> &vectorOfFunctions, const std::vector<Resume> &countOfResumes);

#endif