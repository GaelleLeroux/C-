#include <iostream>

int const cool(int const a) {
    return a;
}


int main(){
    float a = 0.5f;
    float& ref_a = a;
    int b = cool(a);
    std::cout<<b<<std::endl;
    b = 3;
    std::cout<<b<<std::endl;
}