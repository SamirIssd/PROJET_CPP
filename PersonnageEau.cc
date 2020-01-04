#include "PersonnageEau.hh"
#include "PersonnageFeu.hh"

int PersonnageEau::nbPerso = 0;
PersonnageEau::PersonnageEau(){
	nbPerso++;
	name = "Ennemi" + std::to_string(nbPerso);
	srand(time(NULL));
	attaque = (rand() % 2 + 1) * nbPerso / 2;
	pv = (rand() % 2 + 1) * nbPerso;
	defense = 0;
}

void PersonnageEau::subirEffet(Carte& c){
	if(c.getAttr() == "Fum"){

	}
	if(c.getAttr() == "Eau"){
			effet = c .getPoint();
			attaque = attaque + effet;
	}
	if(c.getAttr() == "Feu"){
		for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->setEffet(c .getPoint());
				(*it)->setAtq((*it)->getAtq() + c .getPoint());
		}
	}
}

void PersonnageEau::generateEnnemis(){
	srand(time(NULL));
	int random = rand() % 3;  //On fait apparaitre entre 0 et 2 ennemis par tour
	for(int i = 0; i < random; i++){
		ennemis.push_back(new PersonnageFeu());
	}
}

void PersonnageEau::finDeTour(){
	if(effet != 0){
		attaque -= effet;
		effet = 0;
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->finDeTour();
	}
	if(tauxFum < 0)
		pv = pv - tauxFum;  //Si taux fum < 0, les personnages eaux recuperent des pvs
	if(tauxFum > 0)
		pv = pv - tauxFum;	//Sinon ils perdent des pvs
}