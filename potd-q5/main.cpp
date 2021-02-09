// your code here
#include <iostream>
#include "q5.h"
#include "Food.h"

int main()
{
    Food* myfood = new Food();

    std::cout << myfood->get_name() << std::endl << myfood->get_quantity();
    increase_quantity(myfood);
    std::cout << myfood->get_name() << std::endl << myfood->get_quantity();

    delete myfood;
    return 0;
}
