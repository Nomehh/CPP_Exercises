#include <iostream>
#include "Person.hpp"

int main() {
    Person person("Paluche", "la Falluche");
    std::cout << "La personne s'appelle " << person.toString() <<  std::endl;
    return 0;
}