// #include <iostream> 
// #include <vector>
// #include "Chat.hpp"
// #include "Chien.hpp"
#include "1920S1.hpp"



int main(){
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
    std::cout<<"f10"<<std::endl;
    f10(a).call();
    //f11(b).call();
    std::cout<<"f12"<<std::endl;
    f12(a).call();



    // Chat c1(2,"Natoo");
    // Chat c2(3,"Nara");
    // Chien c3(4,"Abi");
    // std::cout<<c1<<std::endl;
    // std::cout<<c2<<std::endl;
    // std::cout<<c3<<std::endl;

    // Animal& a1 = c1;
    // Animal& a2 = c2;
    // Animal& a3 = c3;
    // std::vector<Animal> M = {a1,a2,a3};
    // for (auto val : M){
    //     std::cout<<val<<std::endl;
    // }
    
    
}