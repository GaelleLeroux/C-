#include "Animal.hpp"

class Chat : public Animal{
    public :
    Chat(int nmb,std::string nom);
    std::string type() const override;
    //friend std::ostream& operator<<(std::ostream s,const Chat& a);
};

std::ostream& operator<<(std::ostream& s, const Chat& a);