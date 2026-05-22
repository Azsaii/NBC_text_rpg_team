#pragma once
#include <string>

class Item
{
protected:
    std::string name;

public:
    virtual std::string GetName();
    virtual void Use();
};
