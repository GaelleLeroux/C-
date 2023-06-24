#include "Chien.hpp"


Chien::Chien(int nmb,std::string nom):Animal(nmb,nom){};
std::string Chien::type() const {
        return "chien";
};

std::ostream& operator<<(std::ostream& s, const Chien& a){
    s << "Nom : " << a.nom() << ", Age : " << a.age() << ", Type : " << a.type();
    return s;
}