#include "Animal.hpp"
#include <iostream>


Animal::Animal(int nmb,std::string nom):a(nmb),n(nom){};

std::string Animal::nom() const{
    return n;
};

int Animal::age() const{
    return a;
};

void Animal::set_age(int nmb){
    a = nmb;
};

std::ostream& operator<<(std::ostream& s, const Animal& a){
    s << "Nom : " << a.nom() << ", Age : " << a.age() << ", Type : " << a.type();
    return s;
}
