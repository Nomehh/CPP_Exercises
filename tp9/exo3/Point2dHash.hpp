#pragma once

#include "Point2d.hpp"
#include <functional>

class Point2dHash
{
public:
    std::size_t operator()(const Point2d &p) const
    {
        auto hash1 = std::hash<int>{}(p.x);
        auto hash2 = std::hash<int>{}(p.y);
        return hash1 ^ hash2;
    }
};