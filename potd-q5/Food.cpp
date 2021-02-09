// Your code here
#include "Food.h"

// default constructor
Food::Food()
{
    name_ = "apple";
    quantity_ = 1;
}

std::string Food::get_name()
{
    return name_;
}

void Food::set_name(std::string str)
{
    name_ = str;
}

int Food::get_quantity()
{
    return quantity_;
}

void Food::set_quantity(int quant)
{
    quantity_ = quant;
}