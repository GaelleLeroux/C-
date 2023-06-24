#include <iostream>
#include <fstream>
#include <map>

using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;

void lecture(string chemin){
   ifstream fichier(chemin);
   std::map<string,int> M;
   string mot;
   while(fichier>>mot){
      M[mot] = M[mot]+1;
      cout<<mot<<endl;
   }

   for (auto val:M){
      cout<<val.first<<" , nombre de fois : "<<val.second<<endl;
   }
   fichier.close();
};

int main(){
    ofstream file("test.txt");

    
    
    file<<"Bonjour le monde c'est moi, 5"<<endl;
    file<<5<<endl;

    file.close();
      
    ifstream fichier("test.txt");
    string ligne;

    while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         cout << ligne << endl;
         //Et on l'affiche dans la console
         //Ou alors on fait quelque chose avec cette ligne
         //À vous de voir
      }

      lecture("test.txt");
   // std::map<string,int> M;
   // string mot;
   // while(fichier>>mot){
   //    M[mot] = M[mot]+1;
   //    cout<<mot<<endl;
   // }

   // for (auto val:M){
   //    cout<<val.first<<" , nombre de fois : "<<val.second<<endl;
   // }

   

}