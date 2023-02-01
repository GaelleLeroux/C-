#include <iostream>
#include <string>

using std::cout;
using std::endl;

struct Conteneur{
    int entier;
    std::string mot;

    void affiche(){
        cout<<"je contiens l'entier "<<entier<<" et le mot "<<mot<<endl;
    }
};


int main()
{
std::string variable="Ma variable";
variable += " a moi.";
cout<<variable<<endl;


Conteneur conteneur_1;
conteneur_1.entier = 6;
conteneur_1.mot = "coucou";
conteneur_1.affiche();
Conteneur conteneur_2 = {4,"bonjour"};
conteneur_2.affiche();


Conteneur tableau[]={ {18,"poisson"},
{12,"charcuterie"},
{2,"soda"},
{0,"eau"} };
for(auto valeur : tableau)
valeur.affiche();

// Il crée un tableau conteneur remplie de conteneur



return 0;
}