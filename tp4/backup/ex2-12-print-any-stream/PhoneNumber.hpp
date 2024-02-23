#pragma once
#include <iostream>
#include <vector>

class PhoneNumber
{
public:
    PhoneNumber(int a, int b, int c, int d, int e);
    bool                 is_valid() const;
    int                  operator[](int i) const;
    friend std::ostream& operator<<(std::ostream& os, const PhoneNumber& pn);

private:
    std::vector<int> _numbers;
};
