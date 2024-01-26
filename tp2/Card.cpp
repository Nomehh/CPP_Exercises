#include "Card.hpp"
#include <iostream>
Card::Card(const CardValue &value, const CardColor &color)
    : _value{value}, _color{color}
{
}

void Card::print() const
{
    std::cout << _value << " de " << _color << std::endl;
}

bool Card::operator==(const Card &other) const
{
    return _value == other._value;
}

bool Card::operator<(const Card &other) const
{
    return _value < other._value;
}
bool Card::operator>(const Card &other) const
{
    return _value > other._value;
}

std::ostream &operator<<(std::ostream &stream, Card card)
{
    return stream << card._value << " de " << card._color << std::endl;
}
std::ostream &operator<<(std::ostream &stream, CardColor cardColor)
{
    switch (cardColor)
    {
    case CardColor::Carreau:
        return stream << "Carreau";
    case CardColor::Pique:
        return stream << "Pique";
    case CardColor::Coeur:
        return stream << "Coeur";
    case CardColor::Trefle:
        return stream << "Trefle";
    }
    return stream;
}

std::ostream &operator<<(std::ostream &stream, CardValue cardValue)
{
    switch (cardValue)
    {
    case CardValue::Sept:
        return stream << "7";
    case CardValue::Huit:
        return stream << "8";
    case CardValue::Neuf:
        return stream << "9";
    case CardValue::Dix:
        return stream << "10";
    case CardValue::Valet:
        return stream << "Valet";
    case CardValue::Dame:
        return stream << "Dame";
    case CardValue::Roi:
        return stream << "Roi";
    case CardValue::As:
        return stream << "As";
    }
    return stream;
}
