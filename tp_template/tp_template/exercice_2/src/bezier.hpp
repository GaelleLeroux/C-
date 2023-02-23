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

    float operator()(T k) const{
        T k2 = k*k;
        T k3 = k2*k;
        T ks = 1-k;
        T ks2 = ks*ks;
        T ks3 = ks2*ks;
        return  coeff(0)*ks3 + 3*coeff(1)*ks2*k + 3*coeff(2)*ks*k2 + coeff(3)*k3;
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