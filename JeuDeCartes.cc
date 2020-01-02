#include "JeuDeCartes.hh"
#include <stdlib.h>  
#include <time.h>       
int JeuDeCartes::tailleDeck = 8;  //6 * 1 ; 3 * 2 ; 1 * 3 ; 2*+2 ; 2*-2

JeuDeCartes::JeuDeCartes(){
	//initialiser le deck de jeu
	e1 = CarteEau(1,"Extincteur","Réduit le taux de fumée de 1.");
	e2 = CarteEau(2,"Lance_eau","Réduit le taux de fumée de 2.");
	e3 = CarteEau(3,"Bombardier_eau","Réduit le taux de fumée de 3.");
	f1 = CarteFeu(1,"Grenade","Augmente le taux de fumée de 1.");
	f2 = CarteFeu(2,"Cocktail_molotov","Augmente le taux de fumée de 2.");
	f3 = CarteFeu(3,"Lance_flammes","Augmente le taux de fumée de 3.");

	c1 = CarteFeu(2, "Compagnon_Boule", "Augmente les dégats d'un personnage Feu de +2.");
	c2 = CarteEau(2, "Compagnon_aquatique", "Augmente les dégats d'un personnage Eau de +2.");
	deck[&e1] = 6;
	deck[&f1] = 6;
	deck[&e2] = 3;
	deck[&f2] = 3;
	deck[&e3] = 1;
	deck[&f3] = 1;
	deck[&c1] = 2;
	deck[&c2] = 2;
}

Carte* JeuDeCartes::piocher(){
	if(deck.empty()){
		std::cout << "=== Pioche vide : le joueur ayant le moins de PV perd la partie ===" << std::endl;
	}
	srand(time(NULL));
	int random = rand() % tailleDeck , i = 0;
	Carte *c;// = deck.begin()->first;
	for(std::map<Carte*,int>::iterator it=deck.begin(); it!=deck.end(); ++it){
		std::cout << it->first->getName() << " : " << it->second << std::endl;
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
	std::cout << "Carte pioché : " << c->getName() << std::endl;
	std::cout << "==================================" << std::endl;

	return c;

}