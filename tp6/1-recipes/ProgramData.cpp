#include "ProgramData.hpp"

void ProgramData::add_material(std::string name)
{
    _materials.emplace_back(std::make_unique<Material>(name));
}

void ProgramData::get_materials(std::vector<const Material *> &materials) const
{
    for (const auto &material : _materials)
    {
        materials.push_back(material.get());
    }
}

void ProgramData::register_recipe(std::vector<std::string> materials, std::vector<std::string> products)
{
    _recipes.emplace_back(std::make_unique<Recipe>(materials, products));
}

void ProgramData::collect_doable_recipes(std::vector<const Recipe *> &recipes) const
{
    // je prend ma recette, je regarde si j'ai tous les elem dans mon inventaire, si oui je l'ajoute à recipes
    bool found;
    for (const auto &recipe : _recipes) // mes recettes
    {
        found = false;
        for (const auto &recipe_material : recipe->get_materials()) // les materiaux de la recette
        {
            for (const auto &inv_material : _materials) // mes materiaux
            {
                if (recipe_material == inv_material->get_name()) // check si le matos de la recette est dans mon inventaire
                {
                    found = true;
                    break;
                }
            }
            if (!found) // on passe à la recette suivante
            {
                break;
            }
        }
        if (found) // si on a trouvé tous les materiaux de la recette
        {
            recipes.push_back(recipe.get());
        }
    }
}

ProductionResult ProgramData::produce(size_t recipe_id)
{
    ProductionResult result;
    return result;
}
