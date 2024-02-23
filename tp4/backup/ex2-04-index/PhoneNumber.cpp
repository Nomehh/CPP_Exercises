#include "PhoneNumber.hpp"

#include <iostream>

PhoneNumber::PhoneNumber(int a, int b, int c, int d, int e)
    : _numbers { a, b, c, d, e }
{}

bool PhoneNumber::is_valid() const
{
    for (int i = 0; i < _numbers.size(); i++)
    {
        if (_numbers.at(i) < 0 || _numbers.at(i) > 99)
        {
            return false;
        }
    }
    return true;
}

int PhoneNumber::operator[](int i) const
{
    if (i < 0 || i >= _numbers.size())
    {
        return -1;
    }
    return _numbers.at(i);
}

std::ostream& operator<<(std::ostream& os, const PhoneNumber& pn)
{
    for (int i = 0; i < pn._numbers.size(); i++)
    {
        if (pn._numbers[i] < 10)
        {
            os << "0";
        }
        os << pn._numbers[i];
    }
    return os;
}