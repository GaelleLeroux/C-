#include <iostream>
#include <math.h>

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

    T closest_point(float x,float y) const{
        int N = 10;
        T p1 = coeff(0);
        T p4 = coeff(3);
        std ::cout<<"coucou"<<std::endl;
        std ::cout<<p1<<std::endl;
        std ::cout<<p4<<std::endl;
        std ::cout<<"coucou"<<std::endl;
        float pas = (2)/N;
        float dist = pow((x-p1.x)*(x-p1.x)+(y-p1.y)*(y-p1.y),0.5);
        for (float i=-1;i<1;i=i+pas){
            float cal = pow((x-i)*(x-i)+(y-(i))*(y-(i)),0.5);
            if (cal<dist){
                p1.x = i;
                p1.y = (i);
            }
        }
        return p1;

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