// Pet.cpp

#include "Pet.h"

Pet::Pet()
{
    setType("cat");
    setFood("fish");
    setName("Fluffy");
    setOwnerName("Cinda");
}

Pet::Pet(std::string type, std::string food, std::string name, std::string owner_name)
{
    setType(type);
    setFood(food);
    setName(name);
    setOwnerName(owner_name);
}

std::string Pet::getName()
{
    return name_;
}

void Pet::setName(std::string name)
{
    name_ = name;
}

std::string Pet::getOwnerName()
{
    return owner_name_;
}

void Pet::setOwnerName(std::string owner_name)
{
    owner_name_ = owner_name;
}

std::string Pet::print()
{
    return "My name is" + getName();
}