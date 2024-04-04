#pragma once
#include "Base.hpp"

#include <utility>
class DerivedInt : public Base
{
public:
    DerivedInt(int i)
        : _data { i }
    {}

    const int data() const { return _data; }
    bool      is_null() const override { return 0 == _data; }

private:
    int _data;
};