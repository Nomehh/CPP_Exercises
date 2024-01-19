#include <iostream>
#include "Person.hpp"

int main() {
    Person person;
    person.first_name = "Palluche";
    person.surname = "La Falluche";
    std::cout << "La personne s'appelle " << person.toString() <<  std::endl;
    return 0;
}