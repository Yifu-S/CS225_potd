#pragma once

#include <string>

namespace potd {
  class Thing {
  public:
    Thing(int); // a constructor that takes the max size of the properties and values arrays.
    Thing(const Thing &); // a copy constructor.
    Thing & operator=(const Thing &);
    ~Thing(); // 

    int set_property(std::string,std::string); // Takes a property name and value, and inserts them into the arrays. 
    // Returns the index into the array if successul, and -1 if the array was full. 
    // If the property name already exists, replace the value.
    std::string get_property(std::string); // Returns the corresponding value for a given property name, 
    // or else an empty string if that property is not found.

  private:

    void _copy(const Thing &);
    void _destroy();

    std::string *properties_;
    std::string *values_;
    int props_ct_;
    int props_max_;
  };
}
