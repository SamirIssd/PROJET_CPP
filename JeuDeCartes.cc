#include "JeuDeCartes.hh"
#include <stdlib.h>  
#include <time.h>       
int JeuDeCartes::tailleDeck = 6;  //6 * 1 ; 3 * 2 ; 1 * 3 ; 2*+2 ; 2*-2

JeuDeCartes::JeuDeCartes(){
	//initialiser le deck de jeu
	/*e1 = CarteEau(1,"Extincteur","Réduit le taux de fumée de 1.");
	e2 = CarteEau(2,"Lance_eau","Réduit le taux de fumée de 2.");
	e3 = CarteEau(3,"Bombardier_eau","Réduit le taux de fumée de 3.");
	f1 = CarteFeu(1,"Grenade","Augmente le taux de fumée de 1.");
	f2 = CarteFeu(2,"Cocktail_molotov","Augmente le taux de fumée de 2.");
	f3 = CarteFeu(3,"Lance_flammes","Augmente le taux de fumée de 3.");

	c1 = CarteFeu(2, "Compagnon_Boule", "Augmente les dégats d'un personnage Feu de +2.");
	c2 = CarteEau(2, "Compagnon_aquatique", "Augmente les dégats d'un personnage Eau de +2.");*/
	//deck[new CarteFeu(1,"Extincteur","Augmente les dégats de tous les personnages Eau de 1.","Soin")] = 6;
	/*deck[new CarteFeu(1,"Grenade","Augmente les dégats de tous les personnages Feu de 1.")] = 6;
	deck[new CarteEau(2,"Lance eau","Augmente les dégats de tous les personnages Eau de 3.")] = 3;
	deck[new CarteFeu(2,"Cocktail_molotov","Augmente les dégats de tous les personnages Feu de 2.")] = 3;
	deck[new CarteEau(3,"Bombardier à eau","Augmente les dégats de tous les personnages Eau de 3.")] = 1;
	deck[new CarteFeu(3,"Lance_flammes","Augmente les dégats de tous les personnages Feu de 3.")] = 1;
	deck[new CarteFum(2, "Compagnon_Boule", "Augmente le taux de Fumée de 2.")] = 2;
	deck[new CarteFum(-2, "Compagnon_aquatique", "Reduit le taux de Fumée de 2.")] = 2;*/
	
	deck[new Tsunami()] = 6;
	deck[new Volcano()] = 6;
	deck[new Boisson()] = 3;
	deck[new Brasier()] = 3;
	deck[new CarteFum(2, "Compagnon_Boule", "Augmente le taux de Fumée de 2.")] = 2;
	deck[new CarteFum(-2, "Compagnon_aquatique", "Reduit le taux de Fumée de 2.")] = 2;
}

Carte* JeuDeCartes::piocher(){
	if(deck.empty()){
		std::cout << "=== Pioche vide : le joueur ayant le moins de PV perd la partie ===" << std::endl;
	}
	srand(time(NULL));
	int random = rand() % tailleDeck , i = 0;
	Carte *c;// = deck.begin()->first;
	for(std::map<Carte*,int>::iterator it=deck.begin(); it!=deck.end(); ++it){
		//std::cout << it->first->getName() << " : " << it->second << std::endl;
		if(i == random){
				c = it->first;
				it->second--;
				if(it->second == 0){
					deck.erase(it->first);
					tailleDeck--;
				}
		}
		i++;
	}

	return c;

}