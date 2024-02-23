#pragma once

#include "PhoneBookEntry.hpp"

#include <iostream>
#include <string>
#include <vector>

class PhoneBook
{
public:
    void add_entry(const PhoneBookEntry& entry);

private:
    std::vector<PhoneBookEntry> book;
};