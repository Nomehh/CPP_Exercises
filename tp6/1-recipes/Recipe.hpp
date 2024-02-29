#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Recipe
{
    // Affiche l'identifiant et la formule d'une recette.
    friend std::ostream &operator<<(std::ostream &stream, const Recipe &recipe);

public:
    Recipe(std::vector<std::string> materials, std::vector<std::string> products);
    std::vector<std::string> get_materials() const;

private:
    std::vector<std::string> _materials;
    std::vector<std::string> _products;
    size_t _id = 1;
    inline static size_t _next_id = 1;
};
