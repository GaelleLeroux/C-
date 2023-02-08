#include <iostream>
#include <map>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::map;
using std::list;


void ajoute_evenement(map<int,list<string>>& coucou, string info,int annee){
    coucou[annee].push_back(info);
    if (coucou.find(annee)==coucou.end()){
        // juste pour garder la ligne de commande
    }
}

void affichage(map<int,list<string>> coucou){
    for(auto valeur : coucou){
        cout<<valeur.first<<" : ";
        for (auto valeurList : valeur.second){
            cout<<valeurList<<" & ";
        }
        cout<<endl;
    }   
    cout<<endl;
}


int main(){
    map<string,float> m;
    m["poisson"]=5.25;
    m["viande"]=6.5;


    for(auto valeur : m){
        cout<<valeur.first<<" ";
        cout<<valeur.second<<" / ";
    }
    cout<<endl;
    cout<<m["poisson"]<<endl;


////////////////////////////////////////////////////////////////////////////////
    map<int,list<string>> exo1;
    ajoute_evenement(exo1,"Creation de CPE Lyon",1994);
    ajoute_evenement(exo1,"Mort d'Ayrton Senna",1994);
    ajoute_evenement(exo1,"Sortie de Peter Pan",1953);
    ajoute_evenement(exo1,"naissance Richard Stallman",1953);
    ajoute_evenement(exo1,"naissance de Dorothé",1953);
    ajoute_evenement(exo1,"bataille de Marignan",1515);
    ajoute_evenement(exo1,"naissance José Bové",1953);
    ajoute_evenement(exo1,"Inauguration tour Eiffel",1889);
    ajoute_evenement(exo1,"naissance Ségolène Royal",1953);
    ajoute_evenement(exo1,"naissance de Edwin Hubble",1889);
    ajoute_evenement(exo1,"naissance de John Malkovich",1953);

    
    affichage(exo1);
    
}