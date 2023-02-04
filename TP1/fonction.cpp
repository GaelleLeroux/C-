#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;


void affiche(vector<string> const& Vecteur){
    for(auto valeur : Vecteur){
        cout<<valeur<<" ";
    }
    cout<<endl;
}

string concatene(vector<string> const& vecteur){
    string con;
    for(auto valeur : vecteur){
        con+=valeur;
        con+=" ";
    }
    return con;
}

void ajoute(vector<string>& vecteur){
    for (auto& valeur : vecteur){
        valeur+=",";
    }
}

int main(){
    vector<string> A = {"un","deux","trois"};
    affiche(A);
    auto con = concatene(A);
    cout<<con<<endl;
    ajoute(A);
    affiche(A);
}