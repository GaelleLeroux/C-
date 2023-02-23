
#include "image.hpp"

#include <cstdlib>
#pragma once

#ifndef GRILLE_HPP 
#define GRILLE_HPP

#include <vector>


void image::assert_coord(int x,int y) const
{
    if(x<0 || x>=Nx || y<0 || y>=Ny)
    {
        std::cerr<<"Index "<<x<<","<<y<<" hors bornes."<<std::endl;
        exit(1);
    }
}

const color& image::operator()(int x,int y) const
{
    assert_coord(x,y);
    return data[y+Ny*x];
}
color& image::operator()(int x,int y)
{
    assert_coord(x,y);
    return data[y+Ny*x];
}

void image::resize(int Nx_arg,int Ny_arg)
{
    Nx=Nx_arg;
    Ny=Ny_arg;
    data.resize(Nx_arg*Ny_arg);
}



template <typename T>
class World : public Grille<T*>
{

    void resize(int Nx_arg,int Ny_arg)
    { Nx = Nx_arg; Ny = Ny_arg;
      data.resize(Nx*Ny);
      for(auto& c : data)
      {
        c = new T;
      }
    }
};
template <typename T>
std::ostream& operator<<(std::ostream& os, const World<T>& w)
{
  for (i ...)
    for(j ....)
      os << w(i, j);
  return os;
}

class Case
{
};
std::ostream& operator<<(std::ostream& os, const Case& c)
{
  os << '.';
  return os;
}

class Ressource : public Case
{
};
std::ostream& operator<<(std::ostream& os, const Ressource& r)
{
  os << 'R';
  return os;
}

int main()
{
  Grille<Case*> g;
  g.resize(10, 10);


}


#endif
