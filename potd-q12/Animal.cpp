// Animal.cpp

#include "Animal.h"
#include <string>

std::string Animal::getType()
{
    return type_;
}

void Animal::setType(std::string tyoe)
{
    type_ = tyoe;
}

std::string Animal::getFood()
{
    return food_;
}

void Animal::setFood(std::string food)
{
    food_ = food;
}

std::string Animal::print()
{
    std::string answer = "I am a ";
    answer += type_;
    return answer;
}

Animal::Animal()
{
    type_ = "cat";
    food_ = "fish";
}

Animal::Animal(std::string type, std::string food)
{
    setFood(food);
    setType(type);
}