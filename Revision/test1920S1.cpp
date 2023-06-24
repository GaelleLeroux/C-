#include "1920S1.hpp"


int main() {
    B b;
    f1(b).call();
    std::cout<<"f3"<<std::endl;
    // f2(b).call();
    f3(b).call();
    std::cout<<"f4"<<std::endl;
    f4(b).call();
    std::cout<<"f6"<<std::endl;
    // f5(b).call();
    f6(b).call();
    std::cout<<"f7"<<std::endl;
    f7(b).call();
    std::cout<<"f8"<<std::endl;
    f8(b).call();

    std::cout<<"f9"<<std::endl;
    f9(b).call();

    A& a = b;
    std::cout<<"f12"<<std::endl;
    // f10(a).call();
    f11(b).call();
    // f12(a).call();

};