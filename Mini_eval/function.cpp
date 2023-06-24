#include "function.h"

// Exemple d'implémentation
unsigned int factorial( unsigned int number ) {
    return number <= 1 ? number : factorial(number-1)*number;
}

int sum(int a,int b){
    return a+b;
}

long int even_squared_sum(int a){
    long int r = 0;
    int ou = 0;
    int i = 0;

    while (ou!=a){ 
        if (i%2==0) { 
            r = r +i*i;
            ou = ou+1;
        }
        i = i+1;
    }
    return r;
}

Person::Person():myname{"unknown"}{};

Person::Person(std::string a):myname{a}{};
std::string Person::name() const{
        return myname;
       }

std::string& Person::name(){
    return myname;
}

Student::Student():Person(){};
Student::Student(std::string nom):Person(nom){};





ivec2::ivec2():mx{0},my{0}{};
ivec2::ivec2(int a, int b):mx{a},my{b}{};

int ivec2::x() const{
    return mx;
}

int& ivec2::x() {
    return mx;
}

ivec2 ivec2::operator+(const ivec2 other){
    return ivec2(mx+other.mx,my+other.my);
}

std::ostream& operator<<(std::ostream& s,const ivec2& v){
    s<<"("<<v.mx<<","<<v.my<<")";
    return s;
}

int dot(const ivec2& v0, const ivec2& v1){
    return (v0.mx * v1.mx + v0.my * v1.my);
}


int bike::nb_wheels() const {
    return 2;
}

int car::nb_wheels() const {
    return 4;
}
    
int check_wheels(const vehicule& v){
    return v.nb_wheels();
}

