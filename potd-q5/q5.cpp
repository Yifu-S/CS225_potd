// your code here

#include "q5.h"

void increase_quantity(Food* foodptr)
{
    foodptr->set_quantity(foodptr->get_quantity() + 1);
}