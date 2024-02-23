#pragma once

#include "PhoneNumber.hpp"

#include <iostream>
#include <string>

class PhoneBookEntry
{
public:
    PhoneBookEntry(const std::string& name, const PhoneNumber& phone);
    std::string get_name() const;
    PhoneNumber get_number() const;

private:
    std::string _name;
    PhoneNumber _phone;
};