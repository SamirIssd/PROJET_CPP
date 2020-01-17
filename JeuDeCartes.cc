#include "JeuDeCartes.hh"
#include <stdlib.h>  
#include <time.h>       
int JeuDeCartes::tailleDeck = 6;  //6 * 1 ; 3 * 2 ; 1 * 3 ; 2*+2 ; 2*-2

JeuDeCartes::JeuDeCartes(){
	//initialiser le deck de jeu
	deck[new Tsunami()] = 6;
	deck[new Volcano()] = 6;
	deck[new Boisson()] = 3;
	deck[new Brasier()] = 3;
	deck[new CarteFum(2, "Molotov", "Augmente le taux de Fumée de 2.")] = 2;
	deck[new CarteFum(-2, "Extincteur", "Reduit le taux de Fumée de 2.")] = 2;
}

Carte* JeuDeCartes::piocher(){
	if(deck.empty()){
		std::cout << "=== Pioche vide : le joueur gagne la partie ===" << std::endl;
		exit(0);
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