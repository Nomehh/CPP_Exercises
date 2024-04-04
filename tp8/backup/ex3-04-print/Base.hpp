#pragma once

#include <iostream>
class Base
{
public:
    virtual bool        is_null() const   = 0;
    virtual std::string to_string() const = 0;

protected:
    Base() {};

private:
};

inline std::ostream& operator<<(std::ostream& os, const Base& b)
{
    return os << b.to_string();
}
