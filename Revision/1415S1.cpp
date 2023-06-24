#include <string>
#include <iostream>
struct Base
{
Base(){}
virtual ~Base(){}
    virtual std::string f1() const {return "Base";}
    std::string f2() const {return "Base";}
    std::string f3() const {return "Base";}
};
struct Derive : Base
{
Derive():Base(){}
virtual ~Derive(){}
    std::string f1() const {return "Derive";}
    virtual std::string f2() const {return "Derive";}
    std::string f3() const {return "Derive";}
};

template <typename T> void action_0(T const& x)
{
std::cout<<x.f1()<<","<<x.f2()<<","<<x.f3()<<std::endl;
}
template <typename T> void action_1(T x) {action_0(x);}
void action_2(Base const& x) {action_0(x);}
void action_3(Base& x) {action_0(x);}
void action_4(Base x) {action_0(x);}
int main()
{
Derive d;
action_0(d); action_1(d);
action_2(d); action_3(d);
action_4(d);
return 0;
}