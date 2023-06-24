#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
    public : 
    virtual std::string type() const = 0;
    Animal(int nmb,std::string n);
    std::string nom() const;
    int age() const;
    void set_age(int nmb);

    private :
    std::string n;
    int a;
};
#endif

std::ostream& operator<<(std::ostream& s, const Animal& a);