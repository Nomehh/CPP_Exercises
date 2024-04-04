#pragma once
#include "Base.hpp"

#include <utility>
class DerivedInt : public Base
{
public:
    DerivedInt(int i)
        : _data { i }
    {}

    int         data() const { return _data; }
    bool        is_null() const override { return 0 == _data; }
    std::string to_string() const override { return std::to_string(_data); }

private:
    int _data;
};