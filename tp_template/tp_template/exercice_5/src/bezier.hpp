#include <iostream>
#include <math.h>
#include "geometrical_object.hpp"
#include "vec2.hpp"

#ifndef BEZIER_HPP
#define BEZIER_HPP


template <typename T>
class bezier : public geometrical_object {

    public :
    bezier():P(){};

    bezier(T P1, T P2, T P3, T P4):P{P1,P2,P3,P4}{};

    T coeff(int num) const{
        return P[num];
    }

    T& coeff(int num){
        return P[num];
    }

    T operator()(float k) const{
        return  coeff(0)*(1-k)*(1-k)*(1-k) + 3*coeff(1)*(1-k)*(1-k)*k + 3*coeff(2)*(1-k)*k*k + coeff(3)*k*k*k;
    }

    vec2 closest_point(vec2 pd) const{
        int N = 1000;
        float pas = 1.0f/N;
        T pp;
        T ptem;
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

    }

    private :
    T P[4];
};
 
template <typename T>
std::ostream& operator<<(std::ostream& s, bezier<T> const& b){
    s<<"(1-s)^3*"<<b.coeff(0)<<"+3s(1-s)^2*"<<b.coeff(1)<<"+3s^2(1-s)*"<<b.coeff(2)<<"+s^3*"<<b.coeff(3);
    return s;
}

#endif