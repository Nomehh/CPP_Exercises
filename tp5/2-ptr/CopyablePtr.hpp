#pragma once
#include "Object.hpp"

#include <iostream>

class CopyablePtr
{
public:
    /*********** PARTIE A ************/
    CopyablePtr();
    CopyablePtr(int a);
    bool          operator==(std::nullptr_t) const;
    const Object& operator*() const;
    CopyablePtr& operator=(std::nullptr_t);

    /*********** PARTIE B ************/
    CopyablePtr(const CopyablePtr& other);
    CopyablePtr(CopyablePtr&& other);

    /*********** PARTIE C ************/
    CopyablePtr& operator=(CopyablePtr& other);

    /*********** PARTIE D ************/
    CopyablePtr& operator=(CopyablePtr&& other);

    /*********** PARTIE E ************/
    ~CopyablePtr();

private:
    Object* _ptr;
};