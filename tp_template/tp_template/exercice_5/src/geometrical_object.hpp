#include <iostream>
#include "vec2.hpp"

#ifndef GEOMETRICAL_OBJECT_HPP
#define GEOMETRICAL_OBJECT_HPP



class geometrical_object{
    public :
    
    virtual vec2 closest_point(vec2 pd) const=0;

    virtual vec2 operator()(float k) const=0;

};
#endif