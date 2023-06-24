#include "Chat.hpp"


Chat::Chat(int nmb,std::string nom):Animal(nmb,nom){};

std::string Chat::type() const {
        return "chat";
};

std::ostream& operator<<(std::ostream& s, const Chat& a){
    s << "Nom : " << a.nom() << ", Age : " << a.age() << ", Type : " << a.type();
    return s;
}