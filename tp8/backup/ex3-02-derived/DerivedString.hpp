#pragma
#include "Base.hpp"

#include <string>
#include <utility>

class DerivedString : public Base
{
public:
    DerivedString(std::string s)
        : _data { std::move(s) }
    {}

    const std::string data() const { return _data; }

    bool is_null() const override { return "" == _data; }

private:
    std::string _data;
};