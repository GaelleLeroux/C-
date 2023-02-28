#include <iostream>
#include "vec2.hpp"

#ifndef CIRCLE_HPP
#define CIRCLE_HPP


class circle : public geometrical_object {

    circle(int a, int b):c(a),R(b){};

    vec2 closest_point(vec2 pd) const;

    vec2 operator()(float k) const {
        vec2 p (c+R*cos(2*pi*k),c+R*sin(2*pi*k));
        return p;
    };

    private :
    int c;
    int R;
}
#endif