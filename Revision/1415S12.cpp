#include <iostream>

class Test{
    public :

    Test(int a){
        mx[0]=0;
        mx[1]=1;
        mx[2]=2;
    };


    int operator[](int i) const{
        return mx[i];
    }

    int& operator[](int i){
        return mx[i];
    }



    private : 
    int mx[3];
};

int main(){
    Test t(5);

    t[1] = 3;
    int a = t[2];

    std::cout<<t[1]<<" "<<a<<std::endl;

    



    return 0;
};