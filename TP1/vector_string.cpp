#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::endl;
using std::vector;
using std::string;

int main (){

    vector<string> mon_vecteur = {"Bonjour","comment","allez","vous"};

    // Test différence entre capacité et taille

    mon_vecteur.push_back("?");
    cout<<mon_vecteur.size()<<endl;
    cout<<mon_vecteur.capacity()<<endl;

    // Test différent affichage

    cout<<mon_vecteur[0]+" "+mon_vecteur[1]+" "+mon_vecteur[2]+" "+mon_vecteur[3]+" "+mon_vecteur[4]<<endl;
    for(auto it=mon_vecteur.begin(),it_end=mon_vecteur.end();it!=it_end;++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto valeur : mon_vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;

    // Insérer un élément à un endroit précis de la liste

    mon_vecteur.insert(mon_vecteur.begin()+1,"a tous");
    for(auto valeur : mon_vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;

    // Changer un élément de la liste

    mon_vecteur[mon_vecteur.size()-1]="???";
     for(auto valeur : mon_vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;

    // Affichage avec séparation par virgule

    swap(mon_vecteur[0],mon_vecteur[2]);
    for(auto valeur : mon_vecteur){
        cout<<valeur<<";";
    }
    cout<<endl;

    // Trier en utilisant un algorith de la stl

    sort(mon_vecteur.begin(),mon_vecteur.end());
    for(auto valeur : mon_vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;

    // Swap deux élément
    swap(mon_vecteur[0],mon_vecteur[2]);
    for(auto valeur : mon_vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;

    

    return 0;
}