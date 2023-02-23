#include <vector>
#include <iostream>

template <typename T>

struct image{
    int Nx;
    int Ny;

    image();

    image(int N1,int N2);

    std::vector<T> data;

    public : 
    void assert_coord(int x,int y) const;

    color const& operator()(int x,int y) const;

    color& operator()(int x,int y);

    void resize(int N1,int N2);

};


void save_image(string nom,image T);