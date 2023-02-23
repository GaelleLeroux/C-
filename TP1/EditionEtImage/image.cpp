#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include "image.hpp"
#include "color.hpp"

using std::ofstream;
using std::ifstream;
using std::remove;
using std::cout;
using std::endl;
using std::string;
using std::pow;


struct image
{
    //taille
    int Nx,Ny;

    image():Nx(0),Ny(0){}

    image(int N1,int N2):Nx(N1),Ny(N2)
    {
        for (int i=0;i<N2*N1;i++){
            data.insert(data.end(),color());
        }
    }
    //donnees
    std::vector<color> data;

    public : 
    void assert_coord(int x,int y) const
    {
        if(x<0 || x>=Nx || y<0 || y>=Ny)
        {
            std::cerr<<"Index "<<x<<","<<y<<" hors bornes."<<std::endl;
            exit(1);
        }
    }


    color const& operator()(int x,int y) const
    {
        assert_coord(x,y);
        return data[y+Ny*x];
    }

    color& operator()(int x,int y)
    {
        assert_coord(x,y);
        return data[y+Ny*x];
    }

    void resize(int N1,int N2){
        if (N1*N2>=Nx*Ny){
            for (int i=0;i<N1*N2-Nx*Ny;i++){
                data.insert(data.end(),color());
            }
        }
        if(Nx*Ny>N1*N2) {
            for(int i=0;i<Nx*Ny-N1*N2;i++){
                data.erase(data.end()-1);
            }

        }
        Nx = N1;
        Ny = N2;
    }
};