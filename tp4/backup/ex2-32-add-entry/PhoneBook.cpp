#include "PhoneBook.hpp"

void PhoneBook::add_entry(const PhoneBookEntry& entry)
{
    book.push_back(entry);
}