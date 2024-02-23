#pragma once

#include "PhoneNumber.hpp"

#include <iostream>
#include <string>

class PhoneBookEntry
{
public:
    PhoneBookEntry(const std::string& name, const PhoneNumber& phone);
    const std::string& get_name() const;
    const PhoneNumber& get_number() const;
    bool               operator==(const PhoneBookEntry& other) const;

private:
    std::string _name;
    PhoneNumber _phone;
};