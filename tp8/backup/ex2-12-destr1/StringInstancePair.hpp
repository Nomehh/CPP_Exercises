#pragma once

#include <memory>
#include <string>
#include <utility>

class StringInstancePair
{
public:
    StringInstancePair(std::string str)
        : _str { std::move(str) }
        , _instance_counter { std::make_unique<InstanceCounter>() }
    {}

    const std::string&     get_str() const { return _str; }
    const InstanceCounter& get_instance_counter() const { return *_instance_counter.get(); }

private:
    std::string                      _str;
    std::unique_ptr<InstanceCounter> _instance_counter;
};