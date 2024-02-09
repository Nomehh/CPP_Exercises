#pragma once

#include "Department.hpp"

#include <list>
#include <sstream>
#include <string>

class HRSoftSystem
{
public:
    Department &add_department(const std::string &name)
    {
        return _departments.emplace_back(name);
    }
    void print_all_departments() const
    {
        std::stringstream stringBuilder;
        for (Department d : _departments)
        {
            stringBuilder << d;
        }
        std::cout << stringBuilder.str() << std::endl;
    }

    void print_all_employees() const
    {
        std::stringstream stringBuilder;
        for (Department d : _departments)
        {
            stringBuilder << d;
        }
        std::cout << stringBuilder.str() << std::endl;
    }

private:
    std::list<Department> _departments;
};
