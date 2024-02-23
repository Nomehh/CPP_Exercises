#include "PhoneBookEntry.hpp"

#include "PhoneNumber.hpp"

#include <iostream>
#include <string>

PhoneBookEntry::PhoneBookEntry(const std::string& name, const PhoneNumber& phone)
    : _name { name }
    , _phone { phone }
{}

std::string PhoneBookEntry::get_name() const
{
    return _name;
}

PhoneNumber PhoneBookEntry::get_number() const
{
    return _phone;
}