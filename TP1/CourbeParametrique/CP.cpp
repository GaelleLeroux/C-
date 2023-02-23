
#include <iostream>
#include <vector>
#include "CP.hpp"

class vec2 {
    float x;
    float y;
};

std::string to_string(vec2 const& v,std::string const& separator=" "){
    std::string stream;
    stream = stream + v.x + separator + v.y;
    return stream;
};