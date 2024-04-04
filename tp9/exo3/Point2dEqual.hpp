#pragma once 

#include "Point2d.hpp"
#include "Point2dHash.hpp"

class Point2dEqual
{
        bool operator()(const Point2d &p1, const Point2d &p2) const 
        {
            return p1.x == p2.x && p1.y == p2.y;   
        }
};