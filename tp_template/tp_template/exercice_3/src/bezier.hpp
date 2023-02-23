#include <iostream>

#ifndef BEZIER_HPP
#define BEZIER_HPP


template <typename T>
class bezier {

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

    private :
    T P[4];
};
 
template <typename T>
std::ostream& operator<<(std::ostream& s, bezier<T> const& b){
    s<<"(1-s)^3*"<<b.coeff(0)<<"+3s(1-s)^2*"<<b.coeff(1)<<"+3s^2(1-s)*"<<b.coeff(2)<<"+s^3*"<<b.coeff(3);
    return s;
}

#endif