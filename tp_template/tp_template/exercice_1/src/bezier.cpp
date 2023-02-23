#include <iostream>
#include <cmath>

#include "bezier.hpp"

bezier::bezier():P{0.0,0.0,0.0,0.0}{};

bezier::bezier(float P1, float P2, float P3, float P4):P{P1,P2,P3,P4}{};

float bezier::coeff(int num) const{
    return P[num];
}

float& bezier::coeff(int num) {
    return P[num];
}

float bezier::operator()(float k) const{
    float k2 = k*k;
    float k3 = k2*k;
    float ks = 1-k;
    float ks2 = ks*ks;
    float ks3 = ks2*ks;
    return  coeff(0)*ks3 + 3*coeff(1)*ks2*k + 3*coeff(2)*ks*k2 + coeff(3)*k3;
}

