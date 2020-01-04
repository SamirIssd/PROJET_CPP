#include "PersonnageEau.hh"

int PersonnageEau::nbPerso = 0;
PersonnageEau::PersonnageEau():Personnage("Eau"){
	nbPerso++;
	name = "Ennemi" + std::to_string(nbPerso);
	srand(time(NULL));
	attaque = (rand() % 2 + 1) * nbPerso / 2;
	pv = (rand() % 2 + 1) * nbPerso;
	defense = 0;
}

void PersonnageEau::subirEffet(Carte& c){
	pv -= 1;
}