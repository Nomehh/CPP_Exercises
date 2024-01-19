#pragma once

#include <string>

class Person
{
public:
    std::string first_name;
    std::string surname;
    std::string toString() {
        return first_name + " " + surname;
    }
};