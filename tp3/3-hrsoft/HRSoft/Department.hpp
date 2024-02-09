#pragma once

#include "Employee.hpp"

#include <list>
#include <string>
#include <iostream>
#include <sstream>

class Department
{
public:
    Department(const std::string &name)
        : _name{name}
    {
    }

    Employee &add_employee(const std::string &name, unsigned int salary, Employee *manager)
    {
        auto &employee = _employees.emplace_back(name, salary);

        if (manager != nullptr)
        {
            manager->add_subordinate(employee);
        }

        return employee;
    }

    void print_employees()
    {
        std::stringstream stringBuilder;
        for (Employee e : _employees)
        {
            stringBuilder << e;
        }
        std::cout << stringBuilder.str() << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &stream, const Department &department);

private:
    std::string _name;
    std::list<Employee> _employees;
};

inline std::ostream &operator<<(std::ostream &stream, const Department &department)
{
    return stream << department._name;
}
