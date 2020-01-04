#include "Personnage.hh"

int Personnage::tauxFum = 0;

void Personnage::jouer(string name){
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		if((*it)->name == name)
			attaquer(**it);
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		(*it)->attaquer(*this);
	}
	generateEnnemis();
	finDeTour();
}