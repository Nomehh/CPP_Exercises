#include "Card.hpp"
#include "Player.hpp"
#include <iostream>
int main(void)
{

    Player p1{"Gerald"};
    Player p2{"Julien"};
    Player::deal_all_cards(p1, p2);
    Player::play(p1, p2);
    return 0;
}