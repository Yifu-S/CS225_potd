// Your code here
#pragma once

#include <string>

class Food
{
    public:
        // default constructor
        Food();

        std::string get_name();
        void set_name(std::string str);
        int get_quantity();
        void set_quantity(int quant);

    
    private:
        std::string name_;
        int quantity_;
};
