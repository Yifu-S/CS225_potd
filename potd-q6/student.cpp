// Your code here! :)

#include "student.h"

namespace potd
{
    Student::Student()
    {
        name_ = "Sally";
        grade_ = 5;
    }

    std::string Student::get_name()
    {
        return name_;
    }

    void Student::set_name(std::string name)
    {
        name_ = name;
    }

    int Student::get_grade()
    {
        return grade_;
    }

    void Student::set_grade(int grade)
    {
        grade_ = grade;
    }
}