#pragma once
#include <string>
#include "Card.hpp"
#include <vector>

class Player
{
private:
    std::string _name;
    std::vector<Card> _card; // Par défaut, card est vide car on appel le constructeur de la classe Vector
    unsigned int _score = 0; // Pas définie par défaut, donc on fait un class-initializer

public:
    Player(const std::string &name);
    static void deal_all_cards(Player &p1, Player &p2);
    Card operator[](int n);
    unsigned int get_score() const;
    static bool play(Player &p1, Player &p2);
    inline static unsigned int turn_number = 0;
};