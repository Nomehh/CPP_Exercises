#include "Player.hpp"
#include <vector>
#include <string.h>
#include "Card.hpp"
#include <algorithm>
#include <random>
#include <iostream>
#include <chrono>
#include <thread>

Player::Player(const std::string &name) : _name{name}
{
}

void Player::deal_all_cards(Player &p1, Player &p2) //  Déclarée static
{
    std::vector<Card> all_cards;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            all_cards.emplace_back(static_cast<CardValue>(i), static_cast<CardColor>(j));
        }
    }
    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i == 0) // première moitié
            {
                Card card = all_cards.at(i * 16 + j);
                p1._card.push_back(card);
            }
            if (i == 1) // L'autre moitiée
            {
                Card card = all_cards.at(i * 16 + j);
                p2._card.push_back(card);
            }
        }
    }
}

Card Player::operator[](int n)
{
    return _card.at(n);
}

bool Player::play(Player &p1, Player &p2) // static
{

    for (int i = 0; i < 16; i++)
    {
        std::cout << "Tour :" << Player::turn_number << "Score de " << p1._name << ": " << p1._score << " points | Score de " << p2._name << ": " << p2._score << " points" << std::endl;
        Player::turn_number++;
        Card p1Card = p1._card.at(i);
        Card p2Card = p2._card.at(i);
        std::cout << p1._name << " played " << p1Card << std::endl;
        std::cout << p1._name << " played " << p2Card << std::endl;
        if (p1Card == p2Card)

            if (p1Card < p2Card)
                p2._score++;
            else
                p1._score++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 1;
}

unsigned int Player::get_score() const
{
    return _score;
}
