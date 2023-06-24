#include <iostream>

struct Base
{
    virtual void f1() const {std::cout<<"Base"<<std::endl;}
    void f2() const {std::cout<<"Base"<<std::endl;}
    virtual void f3() const {std::cout<<"Base"<<std::endl;}

};

struct Derived : public Base
{
    void f1() const {std::cout<<"Derived"<<std::endl;}
    void f2() const {std::cout<<"Derived"<<std::endl;}
    void f3()  {std::cout<<"Derived"<<std::endl;}
    void f4()  {std::cout<<"Derived"<<std::endl;}
};

int main(){
    const Base b1;
    const Derived d1;
    const Derived d2;
    //Base& b3 = d1;
    const Base& b4 = d1;

    b1.f1();
    d1.f1();
    //d2.f4();
    b4.f1();
    b4.f2();
    b4.f3();
}