#include "CopyablePtr.hpp"
/*********** PARTIE A ************/
CopyablePtr::CopyablePtr()
    : _ptr { nullptr }
{}

CopyablePtr::CopyablePtr(int a)
    : _ptr { new Object(a) }
{}

bool CopyablePtr::operator==(std::nullptr_t) const
{
    return _ptr == nullptr ? true : false;
}

const Object& CopyablePtr::operator*() const
{
    return *_ptr;
}

CopyablePtr& CopyablePtr::operator=(std::nullptr_t)
{
    delete _ptr;
    _ptr = nullptr;
    return *this;
}

/*********** PARTIE B ************/

CopyablePtr::CopyablePtr(const CopyablePtr& other)
    : _ptr { other == nullptr ? nullptr : new Object((*other._ptr)) }
{}

CopyablePtr::CopyablePtr(CopyablePtr&& other)
    : _ptr { std::move(other._ptr) }
{
    other._ptr = nullptr;
}

/*********** PARTIE C ************/
CopyablePtr& CopyablePtr::operator=(CopyablePtr& other)
{
    if (this != &other)
    {
        delete _ptr;
        _ptr = new Object(*other._ptr);
    }
    return *this;
}

/*********** PARTIE D ************/
CopyablePtr& CopyablePtr::operator=(CopyablePtr&& other)
{
    if (this != &other)
    {
        delete _ptr;
        _ptr       = std::move(other._ptr);
        other._ptr = nullptr;
    }
    return *this;
}

/*********** PARTIE E ************/
CopyablePtr::~CopyablePtr()
{
    delete _ptr;
}