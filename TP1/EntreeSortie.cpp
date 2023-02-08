#include <iostream>
#include <fstream>

using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;

int main(){
    ofstream file("test.txt");

    
    
    file<<"Bonjour le monde"<<endl;
    file<<5<<endl;

    file.close();
      
    ifstream file("test.txt");

    while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         cout << ligne << endl;
         //Et on l'affiche dans la console
         //Ou alors on fait quelque chose avec cette ligne
         //À vous de voir
      }


}