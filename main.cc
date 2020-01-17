#include <string>
#include "ChevalierEau.hh"
#include "Personnage.hh"
#include "ChevalierFeu.hh"
#include "JeuDeCartes.hh"
#include "Carte.hh"

using namespace std;

int main(){
    JeuDeCartes j;
    ChevalierEau chev(90, 7, "Afif", 1);
    chev.jouer(""); //initialisation des ennemis

    string cible;
    int i = 1;
    while(1){	
        cout << "=================== TOUR : " << i << " ==================="<< endl << endl ;
    	Carte* carte = j.piocher();
    	chev.prendreCarte(*carte);
    	cout << "Entrez le nom de votre cible : ";
    	cin >> cible;
	    chev.jouer(cible);
        i++;
        cout << endl << endl << endl << endl << endl;
    }
  
    return 0;
}
