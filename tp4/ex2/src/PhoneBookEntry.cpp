#include "PhoneBookEntry.hpp"

#include "PhoneNumber.hpp"

#include <iostream>
#include <string>

PhoneBookEntry::PhoneBookEntry(const std::string& name, const PhoneNumber& phone)
    : _name { name }
    , _phone { phone }
{}

const std::string& PhoneBookEntry::get_name() const
{
    return _name;
}

const PhoneNumber& PhoneBookEntry::get_number() const
{
    return _phone;
}

bool PhoneBookEntry::operator==(const PhoneBookEntry& other) const
{
    return _name == other._name;
}