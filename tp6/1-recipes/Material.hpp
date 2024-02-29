#pragma once

#include <ostream>

class Material
{
    // Affiche le nom d'un materiau.
    friend std::ostream &operator<<(std::ostream &stream, const Material &material);

public:
    Material(std::string name);
    ~Material();
    std::string get_name() const;

private:
    std::string _name; // Nom du materiau.
};
