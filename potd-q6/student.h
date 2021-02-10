// Your code here! :)
#pragma once

#include <string>

namespace potd
{
    class Student
    {
        public:
            Student();
            std::string get_name();
            void set_name(std::string name);
            int get_grade();
            void set_grade(int grade);

        private:
            std::string name_;
            int grade_;
    };
}