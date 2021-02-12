// your code here
#include <iostream>
#include "Bar.h"

namespace potd
{
    Bar::Bar(std::string name) // constructor that takes a string
    {
        f_ = new Foo(name);
        // std::cout << " ??? " << f_->get_name() << std::endl;
    }
    Bar::Bar(const Bar & other) // copy constructor
    {
        f_ = new Foo(other.f_->get_name());
        // std::cout << " ??? " << f_->get_name() << std::endl;
    }
    Bar::~Bar() // destructor
    {
        delete f_;
    }
    Bar & Bar::operator=(const Bar & other) // operator=
    {
        if (this == & other)
        {
            return *this;
        }
        delete f_;
        f_ = new Foo(other.f_->get_name());
        return *this;
    }
    std::string Bar::get_name() // method
    {
        return f_->get_name();
    }
}