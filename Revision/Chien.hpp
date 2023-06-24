#include "Animal.hpp"

class Chien : public Animal{
    public : 
    Chien(int nmb,std::string nom);
    std::string type() const override;
};

std::ostream& operator<<(std::ostream& s, const Chien& a);