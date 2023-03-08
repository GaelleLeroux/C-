#include "circle.hpp"
#include <math.h>
#include <iostream>



circle::circle(vec2 a, int b):c(a),R(b){};
circle::circle():c(vec2(0,0)),R(0){};

vec2 circle::operator()(float k) const {
    vec2 p (c.x+R*cos(2*3.14*k),c.y+R*sin(2*3.14*k));
    return p;
}


vec2 circle::closest_point(vec2 pd) const {
    int N = 1000;
    float pas = 1.0f/N;
    vec2 pp;
    vec2 ptem;
    float i=0;
    ptem = (*this)(i);
    pp = ptem;
    float dist = pow((pd.x-ptem.x)*(pd.x-ptem.x)+(pd.y-ptem.y)*(pd.y-ptem.y),0.5);
    while (i<=1){
        ptem = (*this)(i);
        float cal = pow((pd.x-ptem.x)*(pd.x-ptem.x)+(pd.y-ptem.y)*(pd.y-ptem.y),0.5);
        if (cal<dist){
            dist = cal;
            pp = ptem;
        }
        i = i+pas;
    }
    return pp;
};

