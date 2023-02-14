#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

using std::ofstream;
using std::ifstream;
using std::remove;
using std::cout;
using std::endl;
using std::string;
using std::pow;

struct color
{
    //couleur r,g,b
    int r,g,b;
    //constructeurs
    color():r(0),g(0),b(0)
    {}
    color(int r_arg,int g_arg,int b_arg):r(r_arg),g(g_arg),b(b_arg)
    {}

};
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

std::ostream& operator<<(std::ostream& stream,const color& c)
{
    stream<<c.r<<" "<<c.g<<" "<<c.b;
    return stream;
}

void save_image(string nom,image ima){
    string nom_complet = nom + ".ppm";
    ofstream file(nom_complet);

    file<<"P3"<<endl;
    file<<ima.Nx;
    file<<" ";
    file<<ima.Ny<<endl;
    file<<255<<endl;
    
    for(int i=0;i<ima.Nx;i++){
        for(int j=0;j<ima.Ny;j++){
            file<<ima(i,j)<<endl;
        }
    }

    file.close();
}


void image_gris(int N){
    image ima;
    ima.resize(1,N);
    for (int i=0;i<N;i++){
        ima(0,i)=color(i*255/N,i*255/N,i*255/N);
    }
    save_image("gris",ima);

}


void degrader(int Nx,int Ny,int rayon,int epais){
    image ima;
    ima.resize(Nx,Ny);
    for (int i=0;i<Ny;i++){
        for (int j=0;j<Nx;j++){
            ima(j,i) = color((Ny-i)*255/Ny,0,i*255/Ny);
        }
    }
    auto milieux = Ny/2;
    for (int i=0;i<Ny;i++){
        for (int j=0;j<Nx;j++){
            auto test = pow((i-milieux),2)+pow((j-milieux),2)-pow(rayon,2);
            if(test<0){
                auto test2 = pow((i-milieux),2)+pow((j-milieux),2)-pow((rayon-epais),2);
                if (test2>0){
                    ima(i,j)=color(255,0,0);
            }
            }
        }
    }

    save_image("degrade",ima);
}

int main(){
    image im;
    im.resize(3,2);
    im(0,0)=color(255,0,0);
    im(1,0)=color(0,255,0);
    im(2,0)=color(0,0,255);
    im(0,1)=color(255,255,0);
    im(1,1)=color(0,255,255);
    im(2,1)=color(255,0,255);
    std::cout<<im(0,1)<<std::endl;

    save_image("1_image",im);
    image_gris(11);
    degrader(100,100,25,3);
}