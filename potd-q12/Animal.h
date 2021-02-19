// Animal.h
#pragma once

#include <string>

class Animal
{
    public:
        std::string getType();
        std::string getFood();
        void setType(std::string);
        void setFood(std::string);
        std::string virtual print();

        Animal();
        Animal(std::string, std::string);
    
    protected:
        std::string food_;
        
    private:
        std::string type_;
        

};