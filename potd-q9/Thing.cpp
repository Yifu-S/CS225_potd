// Your code here!

#include "Thing.h"

namespace potd
{
    Thing::Thing(int size)
    {
        properties_ = new std::string[size];
        values_ = new std::string[size];
        props_ct_ = 0;
        props_max_ = size;
    }

    Thing::Thing(const Thing & other)
    {
        _copy(other);
    } 

    Thing & Thing::operator=(const Thing & other)
    {
        if (this != &other) 
        {
            _destroy();
            _copy(other);
        }
    return *this;
    }

    Thing::~Thing()
    {
        _destroy();
    }

    int Thing::set_property(std::string name,std::string value)
    {
        if (props_ct_ == 0 && props_max_ > 0)
        {
            properties_[0] = name;
            values_[0] = value;
            props_ct_++;
            return 0;
        }
        for(unsigned i = 0; i <= (unsigned)props_ct_-1; i++)
        {
            if (name.compare(properties_[i]) == 0)
            {
                values_[i] = value;
                return i;
            }
            else if (props_max_ > props_ct_ && i == (unsigned)props_ct_-1)
            {
                properties_[i+1] = name;
                values_[i+1] = value;
                props_ct_++;
                return i+1;
            }
        }
        return -1;
    }

    std::string Thing::get_property(std::string name)
    {
        for(unsigned i = 0; i <= (unsigned)props_ct_-1; i++)
        {
            if (name.compare(properties_[i]) == 0)
            {
                return values_[i];
            }
        }
        return "";
    }

    void Thing::_copy(const Thing & other)
    {
        properties_ = new std::string[other.props_max_];
        values_ = new std::string[other.props_max_];
        for(unsigned i = 0; i <= (unsigned)other.props_ct_-1; i++)
        {
            properties_[i] = other.properties_[i];
            values_[i] = other.values_[i];
        }
        props_ct_ = other.props_ct_;
        props_max_ = other.props_max_;
    }

    void Thing::_destroy()
    {
        if (properties_ != nullptr)
        {
            delete[] properties_;
        }
        if (values_ != nullptr)
        {
            delete[] values_;
        }
    }
}