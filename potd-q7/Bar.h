// your code here
#pragma once

#include <string>
#include "Foo.h"

namespace potd
{
    class Bar
    {
        private:
            Foo * f_;
        public:
            Bar(std::string name); // constructor that takes a string
            Bar(const Bar & other); // copy constructor
            ~Bar(); // destructor
            Bar & operator=(const Bar & other); // operator=
            std::string get_name(); // method
    };
}