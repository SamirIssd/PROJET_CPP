#include "Personnage.hh"

void Personnage::jouer(string name){
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		if((*it)->name == name)
			attaquer(**it);
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		(*it)->attaquer(*this);
	}
	srand(time(NULL));
	int random = rand() % 3;  //On fait apparaitre entre 0 et 2 ennemis par tour
	for(int i = 0; i < random; i++){

	}
	
}