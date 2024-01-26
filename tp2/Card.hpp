#pragma once

#include <string>
enum class CardColor
{
    Pique,
    Trefle,
    Carreau,
    Coeur
};

enum class CardValue
{
    Sept,
    Huit,
    Neuf,
    Dix,
    Valet,
    Dame,
    Roi,
    As
};

class Card
{
private:
    CardValue _value;
    CardColor _color;

public:
    Card(const CardValue &value, const CardColor &color);
    void print() const;
    bool operator==(const Card &other) const;
    bool operator<(const Card &other) const;
    bool operator>(const Card &other) const;
    friend std::ostream &operator<<(std::ostream &stream, Card card);
};

std::ostream &operator<<(std::ostream &stream, Card card);
std::ostream &operator<<(std::ostream &stream, CardColor cardColor);
std::ostream &operator<<(std::ostream &stream, CardValue cardValue);