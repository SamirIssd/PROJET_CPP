#include "PersonnageFeu.hh"

int PersonnageFeu::nbPerso = 0;
PersonnageFeu::PersonnageFeu():Personnage("Feu"){
	nbPerso++;
	name = "Ennemi" + std::to_string(nbPerso);
	srand(time(NULL));
	attaque = (rand() % 2 + 1) * nbPerso / 2;
	pv = (rand() % 2 + 1) * nbPerso;
	defense = 0;
}

void PersonnageFeu::subirEffet(Carte& c){
	pv -= 1;
}