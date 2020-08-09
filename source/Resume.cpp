#include "Resume.h"

void Resume::setAgeForObject() {
    std::cout << "Age of person: ";
    std::cin >> this->age;
}

void Resume::setNameForObject() {
    std::cout << "Name of person: ";
    std::cin >> this->name;
}

void Resume::setSurnameForObject() {
    std::cout << "Surname of person: ";
    std::cin >> this->surname;
}

unsigned int Resume::getAge() const { return this->age; }

std::string Resume::getName() { return this->name; }

std::string Resume::getSurname() { return this->surname; }

unsigned int Resume::countOfResume = 0;

unsigned int Resume::getCountOfResume() { return countOfResume; }