#include <iostream>

#ifndef FUNCTION_H
#define FUNCTION_H

#define QUESTION 25

// Exemple de fonction 
unsigned int factorial( unsigned int number );

int sum(int a,int b);

long int even_squared_sum(int a);

class Person {
    public :

        Person();
        Person(std::string a);

        std::string name ()const;
        std::string& name();

       
        std::string myname;
};

class Student : public Person{
    public : 
    Student();
    Student(std::string nom);

};



class ivec2 {
    public :
        ivec2();
        ivec2(int a,int b);
        ivec2(ivec2 v0,ivec2 v1);
        int mx;
        int my;

        int x() const;
        int& x();

        ivec2 operator+(const ivec2 other);
        friend std::ostream& operator<<(std::ostream& s,const ivec2& v);

        friend int dot(const ivec2& v0, const ivec2& v1);

};



template <int n>
class ivecN{

    public :
    ivecN(){
        for (int i=0;i<n;i++){
            tab[i] = 0;
        }
    }

    int sum_component(){
        int somme = 0;
        for (int i=0;i<n;i++){
            somme = somme + tab[i];
        }
        return somme;
    }
    
    int tab[n];
};

class vehicule {
    public :
    virtual int nb_wheels() const = 0;
};

class bike : public vehicule{
    public :
    int nb_wheels() const override;
};

class car : public vehicule{
    public :
    int nb_wheels() const override;
};

int check_wheels(const vehicule& v);

#endif