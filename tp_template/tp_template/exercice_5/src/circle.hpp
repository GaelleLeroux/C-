#include <iostream>
#include "vec2.hpp"
#include "geometrical_object.hpp"

#ifndef CIRCLE_HPP
#define CIRCLE_HPP


class circle : public geometrical_object {
    public : 
    circle(vec2 a, int b);
    circle();

    vec2 closest_point(vec2 pd) const;

    vec2 operator()(float k) const ;

    private :
    vec2 c;
    int R;
};

#endif