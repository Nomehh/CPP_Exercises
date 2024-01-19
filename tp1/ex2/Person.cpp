#include "Person.hpp"

std::string Person::get_firstName() {
    return _firstname;
}
std::string Person::get_surname() {
    return _surname;
}
std::string Person::toString() {
    return _firstname + " " + _surname;
}