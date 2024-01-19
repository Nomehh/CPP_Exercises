#pragma once

#include <string>

class Person //private by default
{
    private:
        std::string _firstname;
        std::string _surname;
       
    public:
        Person(std::string first_name, std::string surname)
        : _firstname { first_name }, _surname { surname } 
        {}
        std::string toString(); 
        std::string get_firstName();
        std::string get_surname();
};