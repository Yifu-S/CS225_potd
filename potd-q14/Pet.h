// Pet.h

#pragma once

#include <string>
#include "Animal.h"

class Pet : public Animal
{
    public:
        Pet();
        Pet(std::string, std::string, std::string, std::string);
        std::string getName();
        void setName(std::string name);
        std::string getOwnerName();
        void setOwnerName(std::string owner_name);
        std::string print();

    private:
        std::string name_;
        std::string owner_name_;
};