#pragma once

#include "PhoneNumber.hpp"

#include <iostream>
#include <string>

class PhoneBookEntry
{
public:
    PhoneBookEntry(const std::string& name, const PhoneNumber& phone);

private:
    std::string _name;
    PhoneNumber _phone;
};