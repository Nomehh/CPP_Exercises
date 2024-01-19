#include <iostream>
#include <vector>
#include <sstream>
#include "Person.hpp"


int main() {
    int nb_person = 0;
    std::vector<Person> tab;
    std::string firstname;
    std::string surname;
    std::stringstream builder ;

    std::cout << "Nombre de personnes : " << std::ends;
    std::cin >> nb_person; // Number of person
    if (nb_person <= 0) {
        std::cout << "Veuillez entrer un nombre supérieur à 0." << std::endl;
        return 0;
    }

    builder << "Les personnes sont ";

    for (auto i = 0; i < nb_person; i++) {
        std::cout << "Prenom : " << std::ends;
        std::cin >> firstname; // firstname
        std::cout << "Nom : " << std::ends;
        std::cin >> surname; // surname
        tab.emplace_back(Person(firstname, surname));
        if (i == nb_person-1) {
            builder << tab[i].toString();
            break;
        }
        builder << tab[i].toString() << ", ";
    }

    std::cout << builder.str() << "." <<  std::endl;
    return 0;
}