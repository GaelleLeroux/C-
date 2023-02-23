#ifndef BEZIER_HPP
#define BEZIER_HPP

class bezier {
    public :
    bezier();

    bezier(float P1, float P2, float P3, float P4);

    float coeff(int num) const;

    float& coeff(int num);

    float operator()(float k) const;

    private :
    float P[4];
};
 
#endif