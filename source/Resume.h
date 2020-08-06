#ifndef MYLESSONS_RESUME_H
#define MYLESSONS_RESUME_H
#include <string>
#include <utility>

class Resume {
private:
    unsigned int age;
    std::string name;
    std::string surname;

public:
    Resume() {
        age = 0;
        name = surname = "";
    }
    Resume(unsigned int _age, std::string _name, std::string _surname) {
        this->age = _age;
        this->name = std::move(_name);
        this->surname = std::move(_surname);
    }
    void setAgeForObject();
    void setNameForObject();
    void setSurnameForObject();
    unsigned int getAge() const;
    std::string getName();
    std::string getSurname();
};

#endif