#pragma once

#include <iostream>
class Base
{
public:
    virtual bool        is_null() const   = 0;
    virtual std::string to_string() const = 0;
    std::string         type() const { return _type; }

protected:
    Base()
        : Base("None") {};
    Base(std::string s)
        : _type { std::move(s) }
    {}

private:
    std::string _type;
};

inline std::ostream& operator<<(std::ostream& os, const Base& b)
{
    return os << b.to_string();
}
