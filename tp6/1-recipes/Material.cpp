#include "Material.hpp"

#include <iostream>

std::ostream &operator<<(std::ostream &stream, const Material &material)
{
    return stream << material._name;
}

Material::Material(std::string name)
    : _name(std::move(name))
{
    std::cout << "Material " << _name << " was created" << std::endl;
}

Material::~Material()
{
    std::cout << "Material " << _name << " was destroyed" << std::endl;
}

std::string Material::get_name() const
{
    return _name;
}