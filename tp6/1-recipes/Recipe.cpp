#include "Recipe.hpp"

std::ostream &operator<<(std::ostream &stream, const Recipe &recipe)
{
    stream << "(" << recipe._id << ") ";
    for (const std::string &name : recipe._materials)
    {
        stream << name << " ";
    }

    stream << "=> ";
    for (const std::string &name : recipe._products)
    {
        stream << name;
    }
    return stream;
}

Recipe::Recipe(std::vector<std::string> materials, std::vector<std::string> products)
    : _materials(std::move(materials)), _products(std::move(products)), _id(_next_id++)
{
    std::cout << "Recipe " << *this << " has been created" << std::endl;
}

std::vector<std::string> Recipe::get_materials() const
{
    return _materials;
}
