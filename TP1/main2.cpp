#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::endl;

class personne{
    public:
    std::string nom;
    std::string prenom;

    personne():nom("inconnu"),prenom("inconnu")
    {}

    personne(std::string n,std::string m):nom(n),prenom(m)
    {}
};

class etudiant : public personne
{
    public:
    int note;

    etudiant() : personne(),note(0)
    {}

    etudiant(std::string n,std::string m) : personne(n,m),note(0)
    {}

    etudiant(std::string n,std::string m,int c) : personne(n,m),note(c)
    {}
};

void denomer(personne p)
{
    std::cout<<p.nom<<" "<<p.prenom<<std::endl;
}
int main()
{
etudiant A("Franck","Ribery",2);
etudiant B("Einstein","Albert",18);
personne C("Huster","Francis");
std::list<personne> L;
L.push_back(A);
L.push_front(B);
L.push_front(C);
for(personne p : L)
denomer(p);
return 0;
}



